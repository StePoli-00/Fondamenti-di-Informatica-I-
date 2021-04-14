#include "matrix.h"
double *matrix_snake(const struct matrix *m)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc((new->cols*new->rows), sizeof(double));
	size_t k = 0;
	size_t j = 0;
	for (size_t r = 0; r < new->rows; r++)
	{
		if (r % 2 == 0)
		{
			j = 0;

			for (size_t c = 0; c < new->cols; c++)
			{


				new->data[k*new->cols + j] = m->data[r*m->cols + c];
				++j;

			}
		}
		else
		{
			j = new->cols - 1;
			for (size_t c = 0; c < new->cols; c++)
			{


				new->data[k*new->cols + j] = m->data[r*m->cols + c];
				--j;

			}
		}
		++k;

	}
	double *v = calloc((new->cols*new->rows),sizeof(double));
	size_t i = 0;
	for (size_t r = 0; r < new->rows; r++)
	{
		for (size_t c = 0; c < new->cols; c++)
		{

			v[i] = new->data[r*new->cols + c];
			++i;
		}
	}
	free(new->data);
	free(new);
	return v;

}
