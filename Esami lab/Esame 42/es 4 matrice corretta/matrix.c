#include "matrix.h"
#include <stdlib.h>
struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic)
{
	if (m == NULL)
	{
		return NULL;
	}
	if (ir >= m->rows || ic >= m->cols)
	{
		return NULL;

	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc((new->cols*new->rows), sizeof(double));

	for (size_t c = 0; c < new->cols; ++c)
	{
			for (size_t r = 0; r < new->rows; ++r)
			{
				if (ic == c && ir == r)
				{
					new->data[r*new->cols + c] = m->data[r*m->cols + c];
				}
				if (ic == c || ir == r)
				{
					continue;
				}

				else
				{
					new->data[r*new->cols + c] = m->data[r*m->cols+ c];
				}
			}

		}

	return new;
}
