#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
struct matrix *matrix_quadruplica(const struct matrix *m)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols * 2;
	new->rows = m->rows * 2;
	size_t i = 0;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	
	for(size_t r = 0; r < new->rows; r++)
	{
		size_t j= 0;
		
		if (i == m->rows)
		{
			i = 0;
		}
		for (size_t c = 0; c < new->cols; c++)
		{
			if (j == m->cols)
			{
				j = 0;
			}
			new->data[r*new->cols + c] = m->data[i*m->cols + j];
			++j;
		}
		++i;
	}

	return new;
}
