#include <stdint.h>
#include <stdlib.h>
extern void dct(const double *in, double *out, size_t N);
int main(void)
{
	double in[] = { 1,1,1,1 };
	size_t n = 4;
	double *out = malloc(n * sizeof(double));
	dct(in, out, n);
}
