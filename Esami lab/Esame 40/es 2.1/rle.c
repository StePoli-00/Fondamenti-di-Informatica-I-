#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "rle.h"
bool easy_rle_decode(const char *nomefilein, const char *nomefileout)
{
	if (nomefilein == NULL || nomefileout == NULL)
	{
		return false;
	}
	FILE *f = fopen(nomefilein, "rb");
	FILE *g = fopen(nomefileout, "wb");
	if (f == NULL)
	{
		fclose(g);
		return false;
	}
	char n = 0;
	while (fread(&n,sizeof(char),1,f))
	{
		char c = 0;
		int dim = 0;
		if (n == -1)
		{
			dim = 236;
		}
		else {
			++n;
			dim = n;
		}
		
		fread(&c, sizeof(char), 1, f);
		for (int i = 0; i < dim; i++)
		{
			fwrite(&c, sizeof(char), 1, g);
		}
	}
	fclose(f);
	fclose(g);
	return true;




}