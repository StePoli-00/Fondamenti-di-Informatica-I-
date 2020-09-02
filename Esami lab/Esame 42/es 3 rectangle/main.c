#include "rectangle.h"

int main(void)
{
	struct rect v[] = { {{0, 1},{4,-1} },{ { 3,5 }, { -3,10}} };

	size_t n =2;
	find_largest(v, n);


}