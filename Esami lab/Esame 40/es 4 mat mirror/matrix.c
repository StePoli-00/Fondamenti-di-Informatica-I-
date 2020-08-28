//#include "matrix.h"
//#include <stdint.h>
//#include <stdlib.h>
//#include <stdio.h>
//struct matrix *mirror_mat(const struct matrix *m)
//{
//	if(m==NULL)
//	{
//		return NULL;
//	}
//	struct matrix *new = malloc(sizeof(struct matrix));
//	new->cols = m->cols;
//	new->rows = m->rows;
//	new->data = calloc(new->cols*new->rows, sizeof(double) );
//	
//	if (new->cols >= new->rows)
//	{
//		size_t k = new->cols - 1;
//		for (size_t c = 0; c < new->rows; ++c)
//		{
//			for (unsigned r = 0; r < new->cols; ++r)
//			{
//				new->data[c*new->cols + k] = m->data[c*m->cols + r];
//				--k;
//			}
//			k = new->cols - 1;
//		}
//		return new;
//	}
//	else
//	{
//		size_t k = new->rows - 1;
//		for (size_t c = 0; c < new->rows; ++c)
//		{
//			for (unsigned r = 0; r < new->cols; ++r)
//			{
//				new->data[c*new->cols-1 + k] = m->data[c*m->cols + r];
//				--k;
//			}
//			k = new->rows - 1;
//		}
//		return new;
//	}
//
//}