#include "sparse_matrix.h"
#include <stdint.h>
#include <stdlib.h>

double sm_get(struct sparse_matrix *m, uint32_t row, uint32_t col)
{
	if (m == NULL || row >= m->rows || col >= m->cols)
	{
		return 0;
	}
	struct sparse_matrix *new = malloc(sizeof (struct sparse_matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->colidxs = m->colidxs;
	new->rowidxs = m->rowidxs;
	new->nnz = m->nnz;
	new->data = calloc(new->cols*new->rows, sizeof(double));
	int  k = 0;
	for (size_t c = 0; c < new->cols; ++c)
	{
		for (size_t r = 0; r < new->rows; ++r)
		{
			int i = 0, j = 0;
			for ( size_t x = 0; x < new->nnz; ++x)
			{
				if (c == new->colidxs[i] && r == new->rowidxs[j])
				{
					new->data[c*new->cols + r] = m->data[k];
					++k;


				}
				++i;
				++j;
			}
			
		}
	}
	double val = 0;
	for (size_t c = 0; c < new->cols; ++c)
	{
		for (size_t r = 0; r < new->rows; ++r)
		{
			if (c==r && c ==col && r == row)
			{
				val = new->data[c*new->cols + r];
				
				

			}
		}

	}
	free(new);
	return val;




}

