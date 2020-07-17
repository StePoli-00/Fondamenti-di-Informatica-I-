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
	FILE *f2 = fopen(nomefileout, "wb");
	if (f == NULL || f2 == NULL)
	{
		fclose(f);
		fclose(f2);
		return false;
	}
	char ca = fgetc(f);
	int i = 1;
	char n = 1;
	while (ca != EOF)
	{
		ca = fgetc(f);
		if (ispunct(ca))
		{
			n = ca;
		}
		
		if (isalpha(ca))
	{
		for (int j = 0; j < i; ++j)
		{
	
			fwrite(&ca, sizeof(char), n, f2);
		}
		++i;
		
	}
	ca = fgetc(f);


}

	fclose(f);
	fclose(f2);
	return true;
}
	/*fread(&c, sizeof(int), 1, f);
		fread(&n, sizeof(int), 1, f);
		fwrite(&n, sizeof(int), c, f2);
		ca = fgetc(f);*/





