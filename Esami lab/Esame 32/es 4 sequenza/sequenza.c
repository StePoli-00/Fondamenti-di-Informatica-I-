#define _CRT_SECURE_NO_WARNINGS
#include "sequenza.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool seq_load(const char *filename, struct seq *s)
{

	FILE *f = fopen(filename, "rb");
	if (f == NULL || s == NULL)
	{
		return false;
	}
	int len;

	s->len = 0;
	while (fread(&len, sizeof(uint16_t), 1, f) == 1)
	{
		s->len++;

	}
	rewind(f);
	s->values = malloc(s->len * sizeof(uint16_t));
	fread(s->values, sizeof(uint16_t), s->len, f);
	fclose(f);
	return true;
}

