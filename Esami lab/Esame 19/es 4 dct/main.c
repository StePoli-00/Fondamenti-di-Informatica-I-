#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
extern void dct(const double *in, double *out, size_t n);
int main(void)
{
	double v[] = { 3,5 };
	size_t n = 2;
	double *v2 = malloc(n * sizeof(double));
	dct(v, v2, n);


 }