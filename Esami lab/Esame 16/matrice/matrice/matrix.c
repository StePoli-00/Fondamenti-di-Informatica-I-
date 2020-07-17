#include "matrix.h"
struct matrix *mat_rad(const struct matrix *m,int x)
{
	if (m == NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc((m->rows*m->cols*x) * sizeof(struct matrix));
	new->rows = m->rows;
	new->cols = m->cols*x;
	new->data = malloc((new->rows*new->cols) * sizeof(double));
	size_t j = 0;
	for (size_t c = 0; c <new->cols/x-1; ++c)
	{

		for (size_t r = 0; r < new->rows*x; ++r)
		{
			if(r==new->rows)
			{
				j = 0;
			}
			new->data[c*new->cols + r] = m->data[c*m->cols + j];
			++j;

		}
		j = 0;
	}
	return new;

}