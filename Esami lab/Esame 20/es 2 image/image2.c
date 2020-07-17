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
	
	
	new->data = malloc((new->cols*new->rows)*sizeof(uint8_t));
	size_t k = 0;
	size_t j = 0;
	size_t t = 0;
	size_t cnt2 = 0;
	for (size_t r = 0; r < new->rows; ++r)
	{
		for (size_t c = 0; c < new->cols; ++c)
		{
			
				size_t x =r;
				size_t w =c;

				for (size_t q = 0; q < img->rows; ++q)
				{
					new->data[(w*(new->rows/2)) + x] = img->data[j*(img->rows) + k];
					++x;
					++cnt2;
				}
				++k;
				
			
			if(cnt2==new->rows)
			{
			size_t y = 0;
			size_t cnt = 1;
			for(size_t i=0; i<new->rows;++i)
			{ 
			new->data[(c*new->rows + r)+cnt] = new->data[t*new->rows + y];
			++y;
			++cnt;


			}
			++t;
		
			}

		}
		if (t >= 4)
		{
			break;
		}
		

	}
	return new;
}