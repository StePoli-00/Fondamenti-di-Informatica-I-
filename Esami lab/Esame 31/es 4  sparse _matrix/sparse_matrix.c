#include "sparse_matrix.h"
#include <stdint.h>
#include <stdlib.h>

double sm_get(struct sparse_matrix *m, uint32_t row, uint32_t col)
{
	if (m == NULL || row >= m->rows || col >= m->cols)
	{
		return 0;
	}
	
	for (size_t c = 0; c < m->cols; ++c)
	{
		
		for (size_t r = 0; r < m->rows; ++r)
		{
			if (row == m->rowidxs[c] && col == m->colidxs[r])
			{
				return m->data[r];
					
			}
		}
	}
	return 0;
}