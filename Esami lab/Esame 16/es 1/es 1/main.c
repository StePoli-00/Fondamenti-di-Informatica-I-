#include <stdint.h>
extern int *rotate(const int *vec, size_t len, size_t r);

int main(void)
{
	int a[] = { 1,2,3,4 };
	size_t len = 4;
	size_t r = 2;
	int *b = rotate(a, len, r);
}