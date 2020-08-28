#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
struct matrix *mirror_mat(const struct matrix *m)
{

	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	
	size_t  col=m->cols-1;
	size_t j = 0;
	
	new->data = malloc((new->cols*new->rows) * sizeof(double));
	for (size_t c = 0; c < new->cols; c++)
	{
		j =col;
	
		for (size_t r = 0; r < new->rows; r++)
		{
			new->data[r*new->cols + c] = m->data[j*m->cols+c];
			--j;

		}
		--col;
	}
	return new;
}