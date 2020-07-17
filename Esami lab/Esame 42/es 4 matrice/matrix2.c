//#include "matrix.h"
//#include <stdlib.h>
//struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic)
//{
//	if (m == NULL || ic > m->cols || ir > m->rows)
//	{
//		return NULL;
//	}
//	struct matrix *mat = malloc(sizeof(struct matrix));
//
//	mat->cols = m->cols;
//	mat->rows = m->rows;
//	mat->data = calloc((m->cols *m->rows), sizeof(double));
//	
//	for (size_t c = 0; c < mat->rows; ++c)
//	{
//
//		for (size_t r = 0; r < mat->cols; ++r)
//		{
//			 if (c != ic | r != ir)
//			{
//				mat->data[c*mat->cols + r] = m->data[c*m->cols + r];
//			}
//			 if (c == ic && r == ir)
//			 {
//				 mat->data[c*mat->cols + r] = m->data[c*m->cols + r];
//			 }
//
//
//		}
//	}
//
//	return mat;
//
//}
//
