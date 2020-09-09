#define _CRT_SECURE_NO_WARNINGS
#include"tirocini.h"
#include <string.h>
bool tirocinio_load(FILE *f, struct tirocinio *t)
{
	if (f == NULL || t == NULL)
	{
		
		return false;
	}
	size_t cnt = 0;
	t->nome = malloc(255 *(sizeof(char)));
	t->azienda1 = malloc(255 *(sizeof(char)));
	t->azienda2 = malloc(255 *(sizeof(char)));
	t->azienda3 = malloc(255 *(sizeof(char)));
	if (fscanf(f, "%[^',']",t->nome) != -1)
	{
		++cnt;
	}
	else
	{
		free(t->nome);
		free(t->azienda1);
		free(t->azienda2);
		free(t->azienda3);
		return false;
	}
	fgetc(f);
	//fseek(f, 1, SEEK_CUR);
	if (fscanf(f, "%[^',']", t->azienda1) != -1)
	{
		++cnt;
	}
	else
	{
		
		return false;
	}
	fgetc(f);
	//fseek(f, 1, SEEK_CUR);
	if (fscanf(f, "%[^',']", t->azienda2) != -1)
	{
		++cnt;

	}
	else
	{
		
		return false;
	}
	//fseek(f, 1, SEEK_CUR);
	fgetc(f);
	if (fscanf(f, "%[^'\n']", t->azienda3) != -1)
	{
		++cnt;

	}
	else
	{
		
		return false;
	}

	//fseek(f, 2, SEEK_CUR);
	fgetc(f);
	if (cnt == 4)
	{
		return true;
	}
	else
	{
		
		return false;
	}




}
