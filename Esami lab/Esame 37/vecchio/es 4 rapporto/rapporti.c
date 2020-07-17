#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"rapporti.h"
struct rapporto *leggi_rapporti(const char *filename, uint16_t *n)
{
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		return NULL;
	}
	
		fread(n, sizeof(uint16_t), 1, f);
		struct rapporto *rapp = malloc(*n * sizeof(struct rapporto));	
		
	
	for(uint16_t i=0;i<*n;++i)
		
	{
		uint16_t id;
		char tipo;
		float valore=0;
			fread(&id, sizeof(uint16_t), 1, f);
			fread(&tipo, sizeof(char), 1, f);
			fread(&valore, sizeof(float), 1, f);
			struct rapporto tmp = { .id = id,.tipo = tipo,.valore = valore };
			rapp[i] = tmp;


	
	}
	fclose(f);
	return rapp;
	


}