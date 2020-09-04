#include "matrix.h"

struct matrix *mat_creatediag(const double *values, size_t n)
{
	if (n == 0)
	{
		struct matrix *m= malloc(sizeof(struct matrix));
		m->cols = 0;
		m->rows = 0;
		m->data = NULL;
		return m;
	}
	struct matrix *m = malloc(sizeof(struct matrix));
	m->cols = n;
	m->rows = n;
	m->data = calloc(m->cols*m->rows, sizeof(double));
	size_t i = 0;
	for (size_t c = 0; c < m->cols; c++)
	{
		for (size_t r = 0; r < m->rows; r++)
		{
			if (c == r)
			{
				m->data[c*m->cols + r] = values[i];
				++i;

			}
		}
	}
	return m;

}

