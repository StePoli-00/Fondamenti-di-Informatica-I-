#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "vec_double.h"
void controlla(FILE *f, int *dim)
{
	if (f == NULL)
	{
		return;
	}
	uint32_t n = 0;
	fread(&n, sizeof(uint32_t), 1, f);
	double num = 0;
	while (fread(&num, sizeof(double), 1, f))
	{
		++*dim;
	}
	rewind(f);
	return;
}

struct vec_double *read_vec_double(const char *filename)
{
	if (filename == NULL)
	{
		return NULL;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		return NULL;
	}
	
	struct vec_double *v = malloc(sizeof(struct vec_double));
	uint32_t n = 0;
	int dim = 0;
	controlla(f, &dim);
	fread(&n, sizeof(uint32_t), 1, f);

	if (n != dim || n<=0)
	{
		free(v);
		fclose(f);
		return NULL;
	}
	
	v->size = n;
	v->data = malloc(v->size * sizeof(double));
	int i = 0;
	while (i!=n)
	{
		fread(&v->data[i], sizeof(double), 1, f);
		++i;

	}
	fclose(f);
	return v;
		
}