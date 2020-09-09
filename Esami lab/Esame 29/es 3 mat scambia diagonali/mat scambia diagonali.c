#include "matrix.h"
struct matrix *scambia_diagonali(const struct matrix *m)
{
	if (m == NULL)
	{
		return NULL;
	}
	if (m->rows != m->cols)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;

	size_t j = new->cols - 1;
	size_t k = 0;
	size_t x =0;
	size_t q = 0;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	for (size_t r = 0; r < new->rows; r++)
	{
		
		for (size_t c = 0; c < new->cols; c++)
		{
			if (r == c)//diagonale
			{
				
				new->data[k*new->cols + j] = m->data[r*m->cols + c];
				++k;
			}
			
			else if (c ==j)//antidiagonale
			{
				
				new->data[q*new->cols + x] = m->data[r*m->cols + c];
				

			}
			
			else
			{

				new->data[r*new->cols + c] = m->data[r*m->cols + c];
			}
		
			
		}
		--j;
		++x;
		++q;
	}
	return new;

}