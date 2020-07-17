#include "matrix.h"
bool scalar_mult(struct matrix *dst, const struct matrix *src, double k, bool accumulate)
{
	if (dst == NULL || src == NULL)
	{
		return false;
	}
	if (dst->cols != src->cols || dst->rows != src->rows)
	{
		return false;
	}
	
	if (accumulate == false)
	{
		for (size_t c = 0; c < src->cols; ++c)
		{
			for (size_t r = 0; r < src->rows; ++r)
			{
	
				dst->data[r*dst->cols + c] = k * (src->data[r*src->cols +c]);

			}
		}

		return true;
	}
	else
	{
		
		for (size_t c = 0; c < src->cols; ++c)
		{
			for (size_t r = 0; r < src->rows; ++r)
			{

				dst->data[r*dst->cols + c] = (k * (src->data[r*src->cols + c]))+ dst->data[r*dst->cols+ c];

			}
		}
		
		
		return true;
	}

}
