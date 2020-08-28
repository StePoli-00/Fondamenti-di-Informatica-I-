#define _CRT_SECURE_NO_WARNINGS
#include "config.h"
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
struct keyval *read_config(const char *filename, size_t *n)
{
	if (filename == NULL)
	{
		return NULL;
	}
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		return NULL;
	}
	char c = 0;
	char *str = malloc(256*sizeof(char));
	while ((c = fgetc(f)) != EOF)
	{
		if (c != '#')
		{
			fseek(f, -1, SEEK_CUR);
			fscanf(f, "%[\n]", str);
			c = fgetc(f);
		}

	}
	struct keyval *ky= malloc(sizeof(struct keyval *));
	
	char c = 0;
	int i = 0;
	while ((c=fgetc(f))!=EOF)
	{
		if (c =='#')
		{
			fscanf(f, "%[\n]",str);
			c = fgetc(f);
		}
		while (c == '\n' || c == ' ' || c=='\t')
		{
			c = fgetc(f);
		}
		if (c == '#')
		{
			fscanf(f, "%[\n]", str);
			c = fgetc(f);
		}

		fseek(f, -1, SEEK_CUR);
	fscanf(f, "%[^= ]",ky[i].k);
	c = fgetc(f);
	if (c == ' ')
	{
		c = fgetc(f);
	}
	fscanf(f, "%s", ky[i].v);
	++i;
	}

}
