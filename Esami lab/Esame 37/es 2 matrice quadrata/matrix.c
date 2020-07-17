#include "matrix.h"
struct matrix *mat_rendiquadrata(const struct matrix *a)
{
	if (a == NULL)
	{
		return NULL;
	}
	
	struct matrix *new = malloc(sizeof(struct matrix));
	size_t dim = 0;
	size_t co = a->cols;
	size_t ri = a->rows;
	
	 if (a->cols == a->rows)
	{
	
		new->rows = a->rows;
		new->cols = a->rows;
		new->data =calloc((new->cols*new->rows),sizeof(double));
	}
	else if  (a->cols > a->rows)
	{
		dim = co - ri;
		new->rows = a->rows + dim;
		new->cols = a->cols;
		new->data = calloc((new->rows*new->cols), sizeof(double));
	}
	else
	{
		dim = ri-co;
		new->rows = a->rows;
		new->cols = a->cols + dim;
		new->data = calloc((new->rows*new->cols), sizeof(double));
	}
	for (size_t c = 0; c < a->cols; ++c)
	{
		for (size_t r = 0; r < a->rows; ++r)
		{
			new->data[r*new->cols + c] = a->data[r*a->cols + c];

		}

	}
	return new;

}