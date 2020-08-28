#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct matrix *mat_replica(const struct matrix *a, int dir)
{
	if (a == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	if (dir == 0)
	{
		new->M = a->M ;
		new->N = a->N;
		size_t j = 0;

		new->data = calloc((new->M * new->N)*2, sizeof(double));
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t c = 0; c < a->N; c++)
			{
				size_t k = 0;
				for (size_t r = 0; r < a->M; r++)
				{
					new->data[(k*new->N) + j] = a->data[r*a->N + c];
					k++;
				}
				++j;

			}
		}

		return new;
	}
	else
	{

		new->M = a->M*2;
		new->N = a->N;
		size_t j= 0;
		new->data = calloc(new->M*new->N, sizeof(double));
		for (size_t i = 0; i < 2; i++)
		{

			for (size_t c = 0; c < a->N; c++)
			{
				size_t k= 0;
				for (size_t r = 0; r < a->M; r++)
				{
					new->data[k*new->N+j] = a->data[r*a->N+c];
						++k;
				}
				++j;

			}
		}

		return new;

	}
}
