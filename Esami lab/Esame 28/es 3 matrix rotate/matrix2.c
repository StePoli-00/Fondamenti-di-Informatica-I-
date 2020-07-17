
#include "matrix.h"
struct matrix *rotate_v(const struct matrix *m, int n)
{

	if (m == NULL)
	{
		return NULL;
	}
	if (n == 0)
	{
		 struct matrix *new = malloc(sizeof(struct matrix));
		 new->cols = m->cols;
		 new->rows = m->rows;
		 new->data = calloc((m->cols*m->rows), sizeof(double));

		 for (size_t c = 0; c < new->cols; c++)
		 {
			 for (size_t r = 0; r < new->rows; r++)
			 {
				 new->data[c*new->cols + r] = m->data[c*m->cols + r];

			 }
		 }
		return new;
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
	/*size_t c = 0;
	size_t r = 0;
	size_t q = 0;
	size_t x = 0;*/
	int num = n;
	if (num < 0)
	{
		num *= -1;


		for (int i = 0; i < num; i++)
		{
			for (size_t c = 0; c < new->cols; c++)
			{
				if (c == 0)
				{
					k = new->cols - 1;
				}
				else
				{
					k = c - 1;
				}
				size_t j = 0;
				for (size_t r = 0; r < new->rows; r++)
				{
					new->data[c*new->cols + r] = tmp->data[k*tmp->cols + j];
					++j;
				}

			}

		}

	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			for (size_t c = 0; c < new->cols; c++)
			{
				size_t j = 0;
			
				
					if (c == new->cols - 1)
					{
						k = 0;
					}
					else
					{
						k = c + 1;
					}	
				for (size_t r = 0; r <new->rows; r++)
				{
					new->data[k*new->cols+ r] = tmp->data[c*tmp->cols +j ];
					++j;
				
				}
				
			}
			for (size_t c = 0; c < new->cols; c++)
			{
				for (size_t r = 0; r < new->rows; r++)
				{
					tmp->data[c*tmp->cols + r] = new->data[c*new->cols + r];

				}
			}

		}
		
	}



	
free(tmp);
return new;
}
