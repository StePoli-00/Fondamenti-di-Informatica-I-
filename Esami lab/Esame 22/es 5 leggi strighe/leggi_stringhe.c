#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
char **leggi_stringhe(const char *filename, size_t *size)
{

	if (filename == NULL)
	{
		return NULL;
	}
	FILE *f = fopen(filename, "rb");
	int n = 0;
	if (f == NULL)
	{

		*size = 0;
		return NULL;
	}
	fread(&n, sizeof(int), 1, f);
	if (n == 0)
	{
		*size = 0;
		fclose(f);
		return NULL;
	}
	char **letti = malloc(n * sizeof(char *));
	
	int i = 0;
	int dim=0;
	int j = 0;
	
	while(j!=n)
	{
		fread(&dim, sizeof(int), 1, f);
		char *s=malloc((dim+1) * sizeof(char));
		
		fread(s, sizeof(char), dim, f);
		s[dim] = 0;
		letti[j] = malloc((dim + 1) * sizeof(char));
		//letti[j][dim] = 0;
	strcpy(letti[j], s);
		++j;
		free(s);
	}
	fclose(f);
	*size = n;
	return letti;


}

