#include "matrix.h"
struct bmatrix *mat_boolean(const struct matrix *m, double rhs, enum comparisons cmp)
{

	if (m == NULL)
	{
		return NULL;
	}
	struct bmatrix *new = malloc(sizeof(struct bmatrix));
	new->cols = m->cols;
	new->rows = m->rows;

	new->data =calloc(new->cols*new->rows, sizeof(bool));
	for (size_t r = 0; r < new->rows;r++)
	{
		for (size_t c = 0; c < new->cols; c++)
		{
			bool ris = 0;
			if (cmp == GE)
			{
				if (m->data[r*m->cols + c] >= rhs)
				{
					ris = 1;
				}
				else
				{
					ris = 0;
				}
			}
			else if (cmp == LT)
			{
				if (m->data[r*m->cols + c] < rhs)
				{
					ris = 1;
				}
				else
				{
					ris = 0;
				}
			}
			else if  (cmp == LE)
				{
					if (m->data[r*m->cols + c] <= rhs)
					{
						ris = 1;
					}
					else
					{
						ris = 0;
					}
				}
			else if (cmp == EQ)
			{
				if (m->data[r*m->cols + c] == rhs)
				{
					ris = 1;
				}
				else
				{
					ris = 0;
				}
			}
			else if (cmp == LE)
			{
				if (m->data[r*m->cols + c] != rhs)
				{
					ris = 1;
				}
				else
				{
					ris = 0;
				}
			}
			else if (cmp == GT)
			{
				if (m->data[r*m->cols + c] > rhs)
				{
					ris = 1;
				}
				else
				{
					ris = 0;
				}
			}

			new->data[r*new->cols + c] = ris;
		}
	}
	return new;

}