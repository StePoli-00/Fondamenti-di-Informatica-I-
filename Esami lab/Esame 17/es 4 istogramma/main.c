#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
extern void disegna(uint8_t *h, size_t n, FILE *fout);
int main(void)
{
	uint8_t v[] = { 1,2,3,4,5 };
	size_t n = 5;
	FILE *f = fopen("new.txt", "w");
	disegna(v, n, f);


}