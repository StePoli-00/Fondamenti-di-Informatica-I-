#include "matrix.h"
#include <stdlib.h>
#include <stdint.h>
struct matrix *mat_delete_col(const struct matrix *m, size_t i)
{
	if (m == NULL || i<0 || i>=m->cols)
	{
		return NULL;
	}
	if (m->cols == 1 && m->rows == 1)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols - 1;
	new->rows = m->rows;

	size_t k= 0;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	for (size_t r = 0; r < new->rows; r++)
	{
		size_t j = 0;
		for (size_t c = 0; c < m->cols; c++)
		{
			if (c == i)
			{
				continue;
			}
			new->data[k*new->cols + j] = m->data[r*m->cols + c];
			++j;
			
			
		}
		++k;
	}

	return new;
}