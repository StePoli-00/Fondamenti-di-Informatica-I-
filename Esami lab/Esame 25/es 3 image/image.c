#include "image.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct image *aggiungi_cornice(const struct image *img)
{
	if (img == NULL)
	{
		return NULL;
	}
	struct  image *new = malloc(sizeof(struct image));
	new->cols = img->cols +2;
	new->rows = img->rows +2;
	size_t j = 0;
	size_t k = 0;
	new->data = calloc(new->cols*new->rows, sizeof(uint8_t));
	if (img->cols == img->rows)
	{
		for (size_t r = 0; r < new->rows; r++)
		{

			for (size_t c = 0; c < new->cols; c++)
			{
			if (c != 0 && c != new->cols - 1)
				{
					if (j == img->cols)
					{
						return new;
					}
					for (size_t k = 0; k < img->cols; k++)
					{

						new->data[c*new->cols + (k + 1)] = img->data[j*img->cols + k];


					}
					++j;

				}

			}
		}
	}
	else
	{
		for(size_t r = 0; r < new->rows; r++)
		{
			if (r == 0)
			{
				continue;
			}
			for (size_t c = 0; c < new->cols; c++)
			{
				if (c != 0 && c != new->cols)
				{
					if (j != img->cols)
					{
						new->data[r*new->cols + c] = img->data[k*img->cols + j];
						++j;
					}
				}
			}
			j = 0;
			++k;
			if (k == img->rows)
			{
			break;
			}
		}
	}

	return new;


}
