#include "matrix.h"
#include <stdlib.h>
struct matrix *matrix_flip_h(const struct matrix *m)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *flip = malloc(sizeof(struct matrix));
	flip->cols = m->cols;
	flip->rows = m->rows;
	
	flip->data = calloc((flip->cols*flip->rows), sizeof(double));
	if (flip->cols > flip->rows)
	{
		unsigned int  j = m->cols - 1;
		for (size_t c = 0; c < flip->cols-1; ++c)
			
		{
			for (size_t r = 0; r <= flip->rows; r++)
			{
				
				flip->data[c*flip->cols + r] = m->data[c*m->cols +j ];
					--j;
			
				
			}
			j = m->cols-1;

		}

		return flip;

	}
	else {
		unsigned int  j = m->rows - 1;
		for (size_t c = 0; c < flip->cols; ++c)
		{
			for (size_t r = 0; r < flip->rows; r++)
			{

				flip->data[c*flip->cols + r] = m->data[c*m->cols + j];
				--j;
			}
			j = m->rows - 1;

		}

		return flip;

	}
}
