#include "libri.h"
bool libro_scrivi(const struct libro *p, FILE *f)
{
	if (f == NULL || p == NULL)
	{
		fclose(f);
		return false;
	}
	size_t n=strlen(p->titolo);
	for (size_t i = 0; i < n; i++)
	{
		fwrite(&p->titolo[i], sizeof(char), 1, f);

	}
	char t = 0;
	fwrite(&t, sizeof(char), 1, f);
	size_t i = 0;
	while (p->anni_ristampe[i] != 0)
	{
		fwrite(&p->anni_ristampe[i], sizeof(uint16_t), 1, f);
		++i;
	}
	fwrite(&p->anni_ristampe[i], sizeof(uint16_t), 1, f);
	//fclose(f);
	return true;
}