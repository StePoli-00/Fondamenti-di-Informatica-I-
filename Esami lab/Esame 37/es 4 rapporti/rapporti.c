#define _CRT_SECURE_NO_WARNINGS
#include "rapporti.h"
struct rapporto *leggi_rapporti(const char *filename, uint16_t *n)
{
	if (filename == NULL)
	{
		*n = 0;
		return NULL;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		*n = 0;
		return NULL;
	}
	//uint16_t dim = 0;
	fread(n, 1, sizeof(uint16_t), f);
	struct rapporto *r = malloc(*n* sizeof(struct rapporto));
	/*uint16_t Id = 0;
	char type = 0;
	float value = 0;*/
	int i = 0;
	
	while (i<*n)
	{
		fread(&r[i].id, 1, sizeof(uint16_t), f);
		fread(&r[i].tipo, 1, sizeof(char), f);
		fread(&r[i].valore,1, sizeof(float), f);
		/*r[i].id = Id;
		r[i].tipo = type;
		r[i].valore = value;*/
		++i;
	}
	fclose(f);
	return r;

}