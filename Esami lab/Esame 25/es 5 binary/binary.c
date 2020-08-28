#define _CRT_SECURE_NO_WARNINGS
#include "binary.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
void stampa_binario(const char *filename_in, const char *filename_out)
{
	if (filename_in == NULL || filename_out == NULL)
	{
		return;
	}
	FILE *f = fopen(filename_in, "rb");
	FILE *g = fopen(filename_out, "w");
	if (f == NULL)
	{
		fclose(g);
		return;
	}
	char c = 0;
	while (fread(&c, sizeof(char), 1, f) != -1)
	{
		fprintf(g, "%c", c);
	}

	int a = 0;



	fclose(f);
	fclose(g);


}
