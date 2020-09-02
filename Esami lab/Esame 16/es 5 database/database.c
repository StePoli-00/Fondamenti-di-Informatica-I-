#define _CRT_SECURE_NO_WARNINGS
#include"database.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
void conta_dim(FILE *f, int *dim)
{
	uint32_t n = 0;
	while (fread(&n, sizeof(uint32_t), 1, f))
	{
		for (size_t j = 0; j < n; j++)
		{
			uint8_t num = 0;
			fread(&num, sizeof(uint8_t), 1, f);
		}
		++*dim;
	}
	rewind(f);
	return;
}
int db_load(const char *filename, struct database *db)
{

	if (filename == NULL || db == NULL)
	{
		return 0;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{

		return 0;
	}

	
	struct  database *d= malloc(sizeof(struct database));
	int dim = 0;
	conta_dim(f, &dim);
	int i = 0;
	uint32_t n = 0;
	d->recs = malloc(dim*sizeof(struct record));
	while(fread(&n, sizeof(uint32_t),1, f))
	{	
		
		d->recs[i].size = n;
		d->recs[i].data = malloc(n * sizeof(uint8_t));
		for (size_t j= 0; j < n; j++)
		{
			uint8_t num = 0;
			fread(&num, sizeof(uint8_t), 1, f);
			d->recs[i].data[j] = num;
		}
		++i;
	}
	fclose(f);
	
	d->num = i;
	db->num = i;
	*db = *d;
	free(d);
	return 1;
}