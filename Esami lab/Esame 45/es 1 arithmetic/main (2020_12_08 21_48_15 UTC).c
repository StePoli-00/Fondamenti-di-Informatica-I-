#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
extern bool is_arithmetic(const int *v, size_t n);
int main(void)
{
	int v[] = { 9, 7, 5, 3 };
	size_t n = 4;
	is_arithmetic(v, n);
	

}