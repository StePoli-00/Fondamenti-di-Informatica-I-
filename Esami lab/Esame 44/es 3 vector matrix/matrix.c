#include "matrix.h"
struct vector *mat_vectorize(const struct matrix *m, enum vectorize_by dir)
{

	if (m == NULL || (dir != BY_ROW && dir != BY_COLUMN))
	{
		return NULL;
	}
	/*struct matrix *mat = malloc(sizeof(struct matrix));
	mat->cols = m->cols;
	mat.*/
	struct vector  *v= malloc(sizeof(struct vector));
	v->n = m->cols*m->rows;
	v->data = malloc(v->n * sizeof(double));
	size_t i = 0;
	if (dir == BY_ROW)
	{
		for (size_t c = 0; c < m->cols; c++)
		{
			for (size_t r = 0; r < m->rows; r++)
			{
				v->data[i] = m->data[c*m->rows+ r];
				++i;
			}
		}
		
		return v;



	}
	else
	{
		for (size_t c = 0; c < m->cols; c++)
		{
			for (size_t r = 0; r < m->rows; r++)
			{
				v->data[i] = m->data[r*m->cols + c];
				++i;
			}
		}
		return v;


	}

}
