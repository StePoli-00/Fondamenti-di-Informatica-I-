#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
int rimuovidoppie(const char *filein, const char *fileout)
{
	if (filein == NULL || fileout == NULL)
	{
		return 0;
	}
	FILE *f = fopen(filein, "r");
	FILE *g = fopen(fileout, "w");
	if (f == NULL)
	{
		fclose(g);
		return 0;
	}
	char *str = malloc(500*sizeof(char));
	size_t  n = 0;
	while (fscanf(f, "%[^'EOF']",str)!=EOF)
	{
		size_t dim = strlen(str);
		n += dim;
	}
	str = realloc(str, sizeof(char)*(n + 1));
	str[n] = 0;
	size_t i = 1;
	fprintf(g,"%c", str[0]);
	while (str[i]!='\0')
	{
		if (str[i] != str[i - 1])
		{
			fprintf(g,"%c", str[i]);
		}
		++i;

	}
	free(str);
	fclose(f);
	fclose(g);
	return 1;


}