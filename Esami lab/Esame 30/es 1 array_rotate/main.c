#include <stdint.h>
#include <stdlib.h>
extern int *rotate(const int *vec, size_t len, size_t r);
int main(void)
{
	int v[] = { 1,2,3,4 };
	size_t n = 4;
	size_t i = 6;
	int *new = rotate(v, n, i);


}