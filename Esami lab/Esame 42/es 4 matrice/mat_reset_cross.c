#include "matrix.h"
#include <stdlib.h>
struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic)
{
	if (m == NULL || ic >= m->cols || ir >= m->rows)
	{
		return NULL;
	}
	 struct matrix *mat=malloc(sizeof(struct matrix));
	mat->cols = m->cols;
	mat->rows = m->rows;
	mat->data = malloc((mat->rows*mat->cols)*sizeof(double));
	for (size_t c = 0; c < mat->cols; ++c)
	{
		for (size_t r = 0; r < mat->rows; ++r)
		{
			mat->data[r*mat->cols + c] = m->data[r*m->cols + c];
		}
	}


	for (size_t c = 0; c < mat->cols; ++c)
	{

		for (size_t r = 0; r < mat->rows; ++r)
		{
			if( c==ic && r==ir)
			{
				continue;
			}
			else if (c== ic|| r== ir)
			{
				mat->data[r*mat->cols+ c] = 0;
			}
	
		
		
		}
	}

	return mat;
	
}

