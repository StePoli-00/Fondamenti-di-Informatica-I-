//#include "matrix.h"
//#include <stdlib.h>
//struct matrix *mat_delete_col(const struct matrix *m, size_t i)
//{
//	if (m == NULL || i >= m->cols )
//	{
//		return NULL;
//	}
//	if (m->cols == 1 && m->rows == 1)
//	{
//		return NULL;
//	}
//	struct matrix *new = malloc(sizeof(struct matrix));
//	new->cols = m->cols - 1;
//	new->rows = m->rows;
//	new->data = calloc(new->rows*new->cols, sizeof(double));
//	size_t k = 0;
//	size_t j = 0;
//	size_t x = new->rows;
//	for (size_t c= 0; c <= new->rows;++c)
//	{
//		if (c == i)
//		{
//			continue;
//		}
//		if (c == x)
//		{
//			j= x - 1;
//		}
//		for (size_t r = 0;r < new->cols; ++r)
//		{
//			
//			new->data[k*new->cols+r] = m->data[j*m->cols + r];
//			
//		}
//		++k;
//		++j;
//		
//	}
//
//	return new;
//}