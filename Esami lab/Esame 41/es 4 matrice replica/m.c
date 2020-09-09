#include "matrix.h"

struct matrix *mat_replicate(const struct matrix *m) {

	
	struct matrix *v = malloc(sizeof(struct matrix));
	v->cols = 2*m->cols;
	v->rows = m->rows;
	v->data = calloc((v->cols*v->rows), sizeof(double));

	size_t kr = 0;
	size_t jc = 0;


	for (size_t i = 0; i < 2; i++)
	{
		for (size_t c = 0; c < m->cols; ++c)
		{
			for (size_t r = 0; r < m->rows; ++r)
			{
				v->data[kr*v->cols + jc] = m->data[r*m->cols + c];
				++kr;
			}
			kr = 0;
			++jc;
		}
	}
	return v;
}