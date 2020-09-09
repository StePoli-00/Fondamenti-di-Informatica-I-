#include <stdint.h>
extern int *clamped(const int *v, size_t n, int min, int max);
int main(void)
{
	int v[] = { 1,2,3,4};
	size_t n = 4;
	int min = 2;
	int max = 3;
	int *v1 = clamped(v, n, min, max);


}