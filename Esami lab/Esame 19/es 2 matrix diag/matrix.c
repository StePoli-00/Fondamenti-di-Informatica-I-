#include "matrix.h"
struct matrix *mat_creatediag(const double *values, size_t n)
{
	if (n == 0 || values == NULL)
	{
		struct matrix *m = malloc(sizeof(struct matrix));
		m->cols = 0;
		m->rows = 0;
		m->data = NULL;
		return m;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = n;
	new->rows = n;
	size_t k = 0;
	size_t j = 0;
	size_t i = 0;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	for (size_t c = 0; c < new->cols; c++)
	{
		for (size_t r = 0; r < new->rows; r++)
		{
			if (r == k && c == j)
			{
				new->data[r*new->cols + c] = values[i];
				++i;
				++k;
				++j;
			}
			
		}
		

	}
	return new;


}