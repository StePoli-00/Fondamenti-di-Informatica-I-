#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct matrix *matrix_flip_v(const struct matrix *m)
{
	if(m==NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc((new->cols*new->rows), sizeof(double));
	
	for (size_t r = 0; r < new->rows; r++)
	{
		size_t k=r+1;
		for (size_t c = 0; c < new->cols; c++)
		{
			if (k == new->rows)
			{
				k =0;
			}
			new->data[k*new->cols +c] = m->data[r*m->cols + c];

		}
	}
	return new;

}

