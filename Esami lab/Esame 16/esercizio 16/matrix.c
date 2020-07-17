#include "matrix.h"
struct matrix *mat_scale(const struct matrix *m, double x)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc((m->rows*m->cols) * sizeof(struct matrix));
	new->rows = m->rows;
	new->cols = m->cols;
	new->data = malloc((new->rows*new->cols) * sizeof(double));
	new->data = m->data;
	for (size_t c = 0; c < new->cols; ++c)
	{

		for (size_t r = 0; r < new->rows; ++r)
		{
			
			new->data[c*new->cols + r] = new->data[c*new->cols + r] * x;

		}

	}
	return new;
	
}