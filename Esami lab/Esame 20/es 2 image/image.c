#include"image.h"
#include <stdlib.h>
struct image *image_doublesize(const struct image *img)
{
	if (img == NULL)
	{
		return NULL;
	}
	struct image *new = malloc(sizeof(struct image));
	new->cols = img->cols * 2;
	new->rows = img->rows * 2;
	struct image *tmp = malloc(sizeof(struct image));
	tmp->rows = 0;
	tmp->cols = img->cols;


	new->data = malloc((new->cols*new->rows) * sizeof(uint8_t));
	size_t k = 0;
	size_t j = 0;
	size_t x = 0;
	size_t cnt = 0;
	uint8_t *v = malloc(new->cols * sizeof(uint8_t));
	for (size_t c = 0; c < img->cols; c++)
	{
			
		for (size_t r = 0; r < img->rows; r++)
		{
			for (size_t i = 0; i < img->cols; i++)
			{
				new->data[j*new->cols + k] = img->data[c*img->cols + r];
				v[x] = new->data[j*new->cols + k];
				++x;
				++k;
			}
			
		}
		++j;
		k = 0;
		for (size_t i = 0; i <new->cols; i++)
		{
			new->data[j*new->cols + k] = v[i];
			++k;
		}
		++j;
		k = 0;
		x = 0;
	}
	free(v);
	return new;
}