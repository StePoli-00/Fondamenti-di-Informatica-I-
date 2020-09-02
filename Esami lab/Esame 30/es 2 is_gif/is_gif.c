#define _CRT_SECURE_NO_WARNINGS
#include "is_gif.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool is_gif(const char *filename) {
	if (filename == NULL)
	{
		return false;;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		return false;
	}
	int n =6;
	char *str = malloc(n+1 * sizeof(char));
	char s[] = { "GIF89a" };
	char s1[]= { "GIF87a" };
	str[n] = 0;

	fread(str, sizeof(char), 6, f);
	if (strcmp(str, s) == 0 || strcmp(str, s1)==0)
		{
			free(str);
			fclose(f);
			return true;
		}
	free(str);
	fclose(f);
	return false;
}
