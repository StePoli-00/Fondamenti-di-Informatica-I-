#include <stdint.h>
#include "funz.h"

extern double *probabilit�(const uint32_t *v, size_t n);
int main(void)
{
	uint32_t v[] = { 1,2,3,4,5 };
	size_t n = 5;
	double *p = probabilit�(v, n);



}
