#include "matrix.h"
struct matrix *mat_pad(const struct matrix *mat)
{
	if (mat == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	
	new->rows = (mat->rows*2)-1;
	new->cols =( mat->cols*2)-1;
	new->data = calloc(new->cols*new->rows,sizeof(double));


	size_t r = 0;
	for (size_t k= 0; k< new->rows; k++)
	{
		size_t c = 0;
		if (k == 0 || k% 2 == 0)
		{
			for (size_t j = 0; j < new->cols; j++)
			{
				if (j== 0 || (j % 2 == 0))
				{
					new->data[k*new->cols + j] = mat->data[r*mat->cols +c];
					++c;
				}
			}
			++r;
		}

	}


	return new;
}