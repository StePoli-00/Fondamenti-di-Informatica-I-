#include"matrix.h"
struct matrix *mat_rendiquadrata(const struct matrix *a)
{
	if (a->rows == 1 && a->cols == 1)
	{
		struct matrix *b = malloc(((a->rows + 1) *(a->cols + 1)) * sizeof(struct matrix));
		b->rows = a->rows + 1;
		b->cols = a->cols + 1;
		b->data = calloc((b->rows*b->cols), sizeof(double));

		for (size_t c = 0; c < b->cols - 1; ++c)
		{
			for (size_t r = 0; r < b->rows-1; ++r)
			{
				b->data[c*b->cols + r] = a->data[c*a->cols + r];
			}
		}
		return b;
	}
		
	if (a->rows < a->cols)
		
	{
			int s = a->cols - a->rows;
			struct matrix *b = malloc(((a->rows + s)*a->cols) * sizeof(struct matrix));
			b->rows = a->rows + s;
			b->cols = a->cols;
			b->data = calloc((b->rows*b->cols), sizeof(double));

			for (size_t c = 0; c < b->cols - 1; ++c)
			{
				for (size_t r = 0; r < b->rows; ++r)
				{
					b->data[c*b->cols + r] = a->data[c*a->cols + r];
				}

			}
			return b;

	}
		else
		{
			if (a->cols < a->rows)
			{
				int s = a->rows - a->cols;
				struct matrix *b = malloc((a->rows*(a->cols + s)) * sizeof(struct matrix));
				b->data = calloc(b->rows*b->cols, sizeof(double));
				b->rows = a->rows;
				b->cols = a->cols + s;


				for (size_t c = 0; c < b->cols - 1; ++c)
				{
					for (size_t r = 0; r < b->rows; ++r)
					{
						b->data[c*b->cols + r] = a->data[c*a->cols + r];
					}

				}
				return b;
			}
		}


}

