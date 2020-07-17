#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
unsigned int contanumeri(const char *nomefile)
{
	//if (nomefile == NULL) return NULL;

	FILE *f = fopen(nomefile, "r");
	if (f == NULL)

	{
		fclose(f);
		return 0;
	}
	
   int c = 0;
	size_t conta = 0;
	
	while ((c=fgetc(f)) != EOF)
	{
	
		if (isdigit(c)!=0)
		{
		++conta;
		}
	
	}
	fclose(f);
	return conta;
}