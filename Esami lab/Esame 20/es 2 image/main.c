#include "image.h"

int main(void)
{
	uint8_t v[] = { 0,1,2,3 };
	struct image m = { 2,2,v };
	/*struct image *m=malloc(sizeof(struct image));
	m->cols = 2;
	m->rows = 2;
	for (size_t i = 0; i < m->cols*m->rows; i++)
	{
		m->data[i] = i;
	}*/
	struct image *new = image_doublesize(&m);

		

}
