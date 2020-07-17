#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
unsigned int contanumeri(const char *nomefile)
{
	if (nomefile == NULL)
	{
		return 0;
	}
	FILE *f = fopen(nomefile, "r");
	if (f == NULL)
	{
		return 0;
	}
	unsigned int cnt = 0;
	char c = fgetc(f);
	while (c != EOF)
	{
		if (isdigit(c))
		{
			++cnt;
		}
		c = fgetc(f);

	}
	fclose(f);
	return cnt;


}
