#define _CRT_SECURE_NO_WARNINGS
#include "sequenza.h"
#include <stdio.h>

bool seq_load(const char *filename, struct seq *s)
{

	if (filename == NULL || s== NULL)
	{
		return false;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		s = NULL;
		return false;
	}
	uint16_t v = 0;
	size_t dim = 0;
	while (fread(&v, sizeof(uint16_t), 1, f))
	{
		++dim;
	}
	rewind(f);
	struct seq *s1 = malloc(sizeof(struct seq));
	s1->values = malloc(dim * sizeof(uint16_t));
	size_t i = 0;
	//oppure 
	//fread(s1->values, sizeof(uint16_t, dim, f));

	while (fread(&s1->values[i], sizeof(uint16_t), 1, f))
	{
		++i;
	}
	s1->len = dim;
	s->len = s1->len;
	s->values = s1->values;
	free(s1);
	fclose(f);
	return true;

}