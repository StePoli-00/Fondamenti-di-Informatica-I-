#include "image.h"
#include <stdint.h>

int main(void)
{

	uint8_t v[] = {1,2,3,4,5,6,7,8,9 };
	uint8_t v1[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	struct image img1 = { 5,3,v1 };
	struct image img = { 3,3,v };
	struct image *new = aggiungi_cornice(&img1);


}