//#include "matrix.h"
//bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate) {
//	if (src == NULL || dst == NULL)
//	{
//		return NULL;
//	}
//	if (src->rows != dst->rows || src->cols != dst->cols) { return false; }
//	if (accumulate == false) {
//		for (size_t i = 0; i < dst->rows; ++i) {
//			for (size_t j = 0; j < dst->cols; ++j) {
//				dst->data[(j * dst->rows) + i] = k * src->data[(j * src->rows) + i]; //se guardiamo per le righe
//			} // j*dst->cols+i   se guardiamo le colonne
//		}
//		return true;
//	}
//	if (accumulate == true) {
//		for (size_t i = 0; i < dst->rows; ++i) {
//			for (size_t j = 0; j < dst->cols; ++j) {
//				dst->data[(j * dst->rows) + i] = dst->data[(j * dst->rows) + i] + (k * src->data[(j * src->rows) + i]);
//			}
//		}
//		return true;
//	}
//}

/*for (size_t c = 0; c <= src->rows; ++c)
		{
			for (size_t r = 0; r < src->cols; ++r)
			{

				dst->data[c*dst->cols + r] = new->data[c*new->cols + r];

			}
		}
		free(new);*/

		/*struct matrix *new = malloc(sizeof(struct matrix));
				new->cols = dst->cols;
				new->rows = dst->rows;
				new->data = calloc((dst->cols*dst->rows), sizeof(double));*/
