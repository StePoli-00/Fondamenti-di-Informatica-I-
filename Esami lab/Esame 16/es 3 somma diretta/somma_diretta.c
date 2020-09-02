#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
struct matrix *mat_sommadiretta(const struct matrix *a, const struct matrix *b)
{
	if (a == NULL || b == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->M = a->M + b->M;
	new->N = a->N + b->N;
	new->data = calloc(new->M*new->N, sizeof(double));
	for(size_t c = 0; c < a->N; c++)
	{
		for (size_t r = 0; r < a->M; r++)
		{
			new->data[c*new->M + r] = a->data[c*a->M+r];

		}
		
	}
	return new;
}
