#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
struct matrix *mat_scale(const struct matrix *m, double x)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	for (size_t r = 0; r < new->rows; r++)
	{
		for (size_t c = 0; c < new->cols; c++)
		{
			new->data[r*new->cols + c] = (m->data[r*m->cols + c])*x;

		}
	}

	return new;
}
