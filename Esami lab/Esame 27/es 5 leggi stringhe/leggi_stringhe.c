#define _CRT_SECURE_NO_WARNINGS
#include "leggi_stringhe.h"

char **leggi_stringhe(const char *filename, size_t *size)
{

	if (filename == NULL || size == NULL)
	{
		*size = 0;
		return NULL;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		*size = 0;
		return NULL;
	}
	char c = fgetc(f);
	size_t cnt = 0;

	while (c!=EOF)
	{
	
		while (c != '\0')
		{
			c = fgetc(f);			
		}

		++cnt;
		c = fgetc(f);
		

	}
	rewind(f);
	char **s =malloc(cnt*sizeof(char *));
	size_t k = 0;
	size_t j = 0;
	c = fgetc(f);
	char *str = malloc(100*sizeof(char));
	size_t i = 0;
	while (c!=EOF)
	{
		if (i == cnt)
		{
			break;
		}
		
		while (c != '\0')
		{
			str[k] = c;
			++k;
			c = fgetc(f);

		}
		str[k] = '\0';
		size_t n = strlen(str);
		s[j] = malloc((n+1) * sizeof(char));
		s[j] = str;
		++*size;
		str = calloc((k-1), sizeof(char));
		++j;
		++i;
		k = 0;
		c = fgetc(f);
	}
	fclose(f);
	free(str);
	return s;
}
