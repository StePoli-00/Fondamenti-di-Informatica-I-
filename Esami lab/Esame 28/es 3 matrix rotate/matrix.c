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
	new->data = calloc((new->cols*new->rows), sizeof(double));
	struct matrix *tmp = malloc(sizeof(struct matrix));
	tmp->cols = new->cols;
	tmp->rows = new->rows;
	tmp->data = calloc((new->cols*new->rows), sizeof(double));
	size_t dim = new->cols*new->rows;
	for (size_t c = 0; c < new->cols; c++)
	{
		for (size_t r = 0; r < new->rows; r++)
		{
			new->data[r*new->cols + c] = m->data[r*m->cols + c];
		}
	}

	size_t k = 0;
	int num = n;
	if (num < 0)
	{
		num *= -1;


		for (int i = 0; i < num; i++)
		{
			for (size_t c = 0; c < tmp->cols; c++)
			{
				if (c == 0)
				{
					k = tmp->cols - 1;
				}
				else
				{
					k = c - 1;
				}
				size_t j = 0;
				for (size_t r = 0; r < tmp->rows; r++)
				{
					tmp->data[k*tmp->cols + j] = new->data[c*new->cols + r];
					++j;
				}
			
			}
			for (size_t c = 0; c < new->cols; c++)
			{
				for (size_t r = 0; r < new->rows; r++)
				{
					new->data[r*new->cols + c] = tmp->data[r*tmp->cols + c];
				}
			}
			tmp->data = calloc(dim, sizeof(double));
		}
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			for (size_t c = 0; c < tmp->cols; c++)
			{
				size_t j = 0;

				if (tmp->cols != 1)
				{
					if (c == tmp->cols - 1)
					{
						k = 0;
					}
					else 
					{
						k = c + 1;
					}
				}
				else
				{
					if (c == tmp->cols)
					{
						k = 0;
					}
					else
					{
						k = c + 1;
					}
				}
				 
				for (size_t r = 0; r < tmp->rows; r++)
				{
					if (tmp->cols == 1 && r==tmp->rows-1  || tmp->rows==1 && c==tmp->cols-1)
					{
						k = 0;
						j = 0;
						tmp->data[k*tmp->cols + j] = new->data[c*new->cols + r];
						break;
					}
					tmp->data[k*tmp->cols + j] = new->data[c*new->cols + r];
					++j;
				}

			}
			for (size_t c = 0; c <new->cols; c++)
			{
				for (size_t r = 0; r < new->rows; r++)
				{
					new->data[r*new->cols + c] = tmp->data[r*tmp->cols + c];
				}
			}
			tmp->data = calloc(dim, sizeof(double));

		}
		
	}
	free(tmp);
	return new;
	
}