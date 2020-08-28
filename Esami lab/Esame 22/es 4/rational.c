
#define _CRT_SECURE_NO_WARNINGS
#include "rational.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
struct rational *rational_read(const char *filename, size_t *size)
{
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		*size = 0;
		return NULL;

	}
	struct rational *v = malloc(1 * sizeof(struct rational));

	bool slash = 0;
	int i = 0;

	while (fscanf(f, "%i", &v[i].num) != -1)
	{

		char c = fgetc(f);
		while (c != '\n')
		{
			if (c == '/')
			{
				slash = 1;
				break;
			}
			c = fgetc(f);

		}
		if (slash == 0)
		{
			fclose(f);
			*size = i;
			return v;

		}
		fscanf(f, "%d", &v[i].den);
		++i;
		v= realloc(v, sizeof(struct rational)*(i+1));
		slash = 0;
	}
	*size = i;
	fclose(f);
	return v;

}
