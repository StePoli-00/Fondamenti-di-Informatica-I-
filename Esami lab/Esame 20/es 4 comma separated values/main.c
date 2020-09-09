#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
extern double *read_csv(FILE *f, size_t *n);
int main(void)
{
	char s[] = { "secondo.txt" };
	FILE*f = fopen(s, "r");
	size_t n = 0;
	double *a = read_csv(f, &n);

}