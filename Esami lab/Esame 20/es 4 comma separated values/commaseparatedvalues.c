#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
double *read_csv(FILE *f, size_t *n)
{
	if (f == NULL || n == NULL)
	{
		return NULL;
	}
	char *s = malloc(255 * sizeof(char));
	size_t cnt = 0;
	size_t dim = 0;
	while (fscanf(f, "%[^',']", s)!=EOF)
	{
		dim = strlen(s);
			++cnt;
		fseek(f, 1, SEEK_CUR);
		
	}
	rewind(f);
	double *v = malloc(cnt * sizeof(double));
	for (size_t i = 0; i < cnt; i++)
	{
		fscanf(f, "%[^',']", s);
			v[i] = atof(s);
			fseek(f, 1, SEEK_CUR);
	}
	*n= cnt;
	free(s);
	return v;
}