#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
struct matrix *mat_replicate(const struct matrix *m)
{
	if(m==NULL)
	{
		return NULL;
	}

	struct matrix *new = malloc(sizeof(struct matrix));
	new->rows = m->rows;
	new->cols = m->cols*2;
	new->data = calloc(new->rows*new->cols, sizeof(double));
	size_t j = 0;
	
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t c = 0; c < m->cols; c++)
		{
			size_t k = 0;
			for (size_t r = 0; r < m->rows; r++)
			{
				new->data[k*new->cols + j] = m->data[r*m->cols + c];
				++k;
			}
			++j;

		}
		
	}


	return new;

}
