
#include "matrix.h"
struct matrix *rotate_v(const struct matrix *m, int n)
{

	if (m == NULL ||  n >(int ) m->rows)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc((m->cols*m->rows), sizeof(double));
	

	struct matrix *tmp = malloc(sizeof(struct matrix));
	tmp->cols = m->cols;
	tmp->rows = m->rows;
	tmp->data = m->data;
	size_t k = 0;
	size_t c = 0;
	size_t r = 0;
	size_t q = 0;
	size_t x = 0;
	if (n < 0)
	{
		n *= -1;
	}

			for (size_t i = 0; i < (size_t)n; i++)
			{
				x = c;
				q = r;

				if (r == new->cols*new->rows)
				{
					break;
				}
				if (r == 0)
					
				{
					k= new->cols - 1;
					for (size_t j = 0; j < tmp->cols; j++)
					{
						new->data[c*new->cols + r] = tmp->data[k*tmp->cols + j];
						++r;

					}
					k = 0;
				}
				if (r == (new->cols-1))
				{
					for (size_t j = 0; j < tmp->cols; j++)
					{
						new->data[c*new->cols + r] = tmp->data[k*tmp->cols + j];
						++r;

					}
				
				}
				else
				{
					for (size_t j = 0; j < tmp->cols; j++)
					{
						new->data[c*new->cols + r] = tmp->data[k*tmp->cols + j];
						++r;

					}
					++k;
					for (size_t j = 0; j < tmp->cols; j++)
					{
						new->data[c*new->cols + r] = tmp->data[k*tmp->cols + j];
						++r;

					}
					r = q + 1;
					c = x + 1;

				
					
				}


				

			}
			free(tmp);

			return new;
}





