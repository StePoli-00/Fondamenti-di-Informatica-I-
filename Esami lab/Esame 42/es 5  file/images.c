#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "images.h"

struct image *read_images(const char *filename, size_t *n)
{
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		return NULL;
	}
	int cnt = 0;
	int c = fgetc(f);
	while (c != EOF)
	{
		if (c == '\n')
			++cnt;
		c=fgetc(f);
	}
	rewind(f);

	struct image *imm = malloc(cnt*sizeof(struct image));
	if (cnt == 0)
	{

		free(imm);
		fclose(f);
		return NULL;
	}
	*n = cnt;
	int i = 0;
	int j = 0;
	
	char *a = malloc(1000*sizeof(char));
	size_t height = 0;
	size_t width = 0;


	while (j!=cnt)
	{
		c = fgetc(f);
		if (c== ':' || c == '\n')
		{
			c = fgetc(f);
		}
		else
		{
			fseek(f, -1, SEEK_CUR);
		}
		while (c!= ':' && c != EOF)
		{
			
			if (c != ':' && c != EOF && c != '\n')
			{
				fseek(f, -1, SEEK_CUR);
			}

			if (c != ':' && c != '\n')
			{
				fscanf(f, "%c", &a[i]);
				++i;
			}
			c = fgetc(f);
		
		}
		a[i] = '\0';

		
		fscanf(f, "%d", &height);
		c = fgetc(f);
		fscanf(f, "%d", &width);

		struct image tmp;
		strcpy(tmp.name, a);
		tmp.height = height;
		tmp.width = width;
		imm[j] = tmp;
		height = 0;
		width = 0;
		i = 0;
		++j;

	}
	free(a);
	fclose(f);
	return imm;


}

	




