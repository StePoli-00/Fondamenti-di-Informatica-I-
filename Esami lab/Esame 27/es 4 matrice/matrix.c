#include "matrix.h"

struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b)
{

	if (a == NULL || b == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = a->cols*b->cols;
	new->rows = a->rows*b->rows;
	new->data = malloc((new->cols*new->rows)* sizeof(double));
	size_t j = 0;
	size_t k = 0;

	for (size_t c = 0; c < new->cols; ++c)	{
		
		for (size_t r = 0; r < new->rows; ++r)
		{
			
			double n1 = a->data[r*a->cols + c];
			for (size_t k = 0; k < b->rows; ++k)
			{
				double n2 = b->data[k*b->cols +j ];
				new->data[r*new->rows + c] = n1* n2;
				++c;
			}
			


			
		}
	}
	return new;

}