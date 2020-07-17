#include "matrix.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p)
{
	if(m==NULL|| p==NULL)
	{
		return NULL;
	}
	struct matrix *new = malloc(sizeof(struct matrix));
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc(m->cols*m->rows, sizeof(double));
	int i = 0;
	
	for (size_t r = 0; r < new->rows; ++r)
		{
			
			for (size_t c = 0; c< new->cols; ++c)
			{

				new->data[r*new->cols + c] = m->data[p[i]* m->cols + c];

			}
			++i;
		}
	
	return new;


}