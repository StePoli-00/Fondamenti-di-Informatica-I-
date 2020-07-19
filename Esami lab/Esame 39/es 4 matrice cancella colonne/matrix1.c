#include <stdlib.h>
#include "matrix.h"

struct matrix *mat_delete_col(const struct matrix *m, size_t i)
{
	if (m == NULL || m->rows == 1 || i >= m->rows)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	size_t j = 0;
	new->data = calloc(new->rows*new->cols, sizeof(double));
	for (size_t c= 0; c <=new->rows; ++c)
	{
		if (c == i)
		{
			continue;

		}
		for (size_t r = 0; r < new->cols; ++r)
		{
			{
				new->data[j*new->rows+ r] = m->data[c*new->cols+ r];


			}


		}
		++j;


	}
	return new;

}

