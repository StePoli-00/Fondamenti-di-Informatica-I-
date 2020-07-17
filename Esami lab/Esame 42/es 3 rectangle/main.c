#include "rectangle.h"

int main(void)
{
	struct rect v[] = { {{0, 2},{3,2} },{ { 3,0 }, { 0,0}} };

	size_t n = 4;
	find_largest(v, n);


}