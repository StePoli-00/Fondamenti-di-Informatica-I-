#include "matrix.h"
struct vector *mat_vectorize(const struct matrix *m, enum vectorize_by dir)
{
	if (m == NULL)
	{
		return NULL;
	}
	if (dir != BY_COLUMN && dir != BY_ROW)
	{
		return NULL;
	}
	struct vector *v = malloc(sizeof(struct vector));
	v->data = calloc((m->cols*m->rows), sizeof(double));
	v->n = m->cols*m->rows;
	size_t i = 0;
	if (dir == BY_ROW)
	{
		for (size_t r = 0; r < m->rows; r++)
		{
			for (size_t c = 0; c < m->cols; c++)
			{
				v->data[i] = m->data[r*m->cols + c];
				++i;

			}
		}
	}
	else
	{
		for (size_t c = 0; c < m->cols; c++)
		{
			for (size_t r = 0; r < m->rows; r++)
			{
				v->data[i]=m->data[r*m->cols + c];
				++i;

			}
		}

	}
	return v;

}
