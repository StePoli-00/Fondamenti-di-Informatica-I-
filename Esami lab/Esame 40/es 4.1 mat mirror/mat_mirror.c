#include "matrix.h"
struct matrix *mirror_mat(const struct matrix *m)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	
	new->data = calloc(new->cols*new->rows, sizeof(double));
	for (size_t r = 0; r < new->rows; r++)
	{
		size_t j = new->cols-1;
		for (size_t c = 0; c < new->cols; c++)
		{
			
			new->data[r*new->cols +c] = m->data[r*m->cols +j];
			--j;
		}
		
	}
	return new;


}