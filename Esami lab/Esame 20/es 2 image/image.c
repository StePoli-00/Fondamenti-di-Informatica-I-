//#include"image.h"
//#include <stdlib.h>
//struct image *image_doublesize(const struct image *img)
//{
//	if (img == NULL)
//	{
//		return NULL;
//	}
//	struct image *new = malloc(sizeof(struct image));
//	new->cols = img->cols * 2;
//	new->rows = img->rows * 2;
//	
//	
//	new->data = malloc((new->cols*new->rows)*sizeof(uint8_t));
//	size_t k = 0;
//	size_t j = 0;
//	size_t t = 0;
//	for (size_t r = 0; r < new->rows; ++r)
//	{
//		for (size_t c = 0; c < new->cols; ++c)
//		{
//			if (r % 2 == 0)
//			{
//				size_t x = r;
//				size_t w = c;
//
//				for (size_t q = 0; q < img->rows; ++q)
//				{
//					new->data[(w*new->rows) + x] = img->data[j*(img->rows) + k];
//					++x;
//				}
//				++k;
//			}
//			else
//			{
//			
//			size_t y = 0;
//			size_t cnt = 1;
//			/*size_t z = c + 2;
//			size_t b = r + 2;*/
//			for(size_t i=0; i<img->rows;++i)
//			{ 
//			new->data[(c*new->rows + r)+cnt] = new->data[t*new->rows + y];
//			++y;
//			++cnt;
//
//
//			}
//			++t;
//		
//			}
//
//		}
//		if (t >= 4)
//		{
//			break;
//		}
//		
//
//	}
//	return new;
//}