#define _CRT_SECURE_NO_WARNINGS
#include "rle.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include <stdbool.h>
bool easy_rle_decode(const char *nomefilein, const char *nomefileout)
{
	FILE *f = fopen(nomefilein, "rb");
	FILE *g = fopen(nomefileout, "wb");
	if (f == NULL)
	{
		fclose(f);
		fclose(g);
		return false;
	}
	char n = 0;
	//int *n = malloc(sizeof(int));
	while (fread(&n,sizeof(char),1,f))
	{
		char c = 0;
		if (n == -1)
		{
			char d = 0;
			fread(&d, sizeof(char), 1, f);
			n = d;
		}
		fread(&c, sizeof(char), 1, f);
		++n;
		int dim = n;
		for (int j = 0; j <dim; ++j)
		{
			fwrite(&c, sizeof(char),1,g);
		}

	}
	fclose(f);
	fclose(g);
	return true;
}

	




