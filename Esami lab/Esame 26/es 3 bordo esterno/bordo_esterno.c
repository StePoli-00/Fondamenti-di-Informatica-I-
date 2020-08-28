#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
double *bordo_esterno(const struct matrix *m, size_t *new_size)
{
	if (m == NULL)
	{
		return NULL;
	}
	double *new = malloc(sizeof(double));
	struct matrix *mat = malloc(sizeof(struct matrix));
	mat->cols = m->cols;
	mat->rows = m->rows;
	mat->data = calloc((mat->cols*mat->rows), sizeof(double));
	for (size_t c = 0; c < mat->cols; c++)
	{
		for (size_t r = 0; r < mat->rows; r++)
		{
			mat->data[r*mat->cols + c] = m->data[r*m->cols + c];

		}
	}
	size_t i = 0;
	
	for (size_t r = 0; r < mat->rows; r++)
	{
		for (size_t c = 0; c < mat->cols; c++)
		{
			if (r==0 || c==0 || r==mat->rows-1 || c==mat->cols-1 )
			{
				new[i] = mat->data[r*mat->cols + c];
				++i;
				new = realloc(new, sizeof(double)*(i + 1));
			}
		}
		
	}
	*new_size = i;
	free(mat);
	return new;

}
