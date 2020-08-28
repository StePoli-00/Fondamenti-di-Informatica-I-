#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
extern void stampa_croce(FILE *f, size_t dim);
extern void stampa_croce_stdout( size_t dim);
int main(void)
{
	char s[] = "new.txt";
	FILE *f = fopen(s, "w");
	size_t dim = 1;
	stampa_croce(s, dim);
	stampa_croce_stdout(dim);

}