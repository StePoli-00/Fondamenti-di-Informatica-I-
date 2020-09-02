

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "persona.h"
struct persona *leggi_persone(const char *filename, size_t *size) {

	FILE *f = fopen(filename, "r");
	if (!f)
		return NULL;

	size_t np = 0;
	fscanf(f, "%d", &np); //numero persone
	char a = 0;
	a = fgetc(f);	// andare avanti nel file (carattere a capo)

	struct persona *people = malloc(np * sizeof(struct persona));
	int i = 0;

	while (i!=np) {
		int j = 0;
		if (!iscntrl(a) && a != ',' && !isspace(a))
		{
			people[i].nome[j] = a;
			++j;
		}
		a = fgetc(f);
		++i;
	}
	fclose(f);
	return people;
	