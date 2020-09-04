#define _CRT_SECURE_NO_WARNINGS
#include "images.h"

struct image *read_images(const char* filename, size_t *n) {

	FILE *f = fopen(filename, "r");
	if (!f)
		return NULL;

	int dim = 0; //contatore a capo (ovvero conto le immagini)
	char a = fgetc(f);	// lettura caratteri
	while (a != EOF) {	//leggo tutto il file fino alla fine
		if (a == '\n') {
			++dim;
		}
		a = fgetc(f);
	}

	rewind(f); //torno all'inizio del file
	if (dim == 0)
	{
		fclose(f);
		return NULL;
	}
	struct image *new = malloc((dim) * sizeof(struct image));

	int h = 0;
	int w = 0;


	for (int i = 0; i < dim; ++i) {

		fscanf(f, "%[^:]", new[i].name);	//lettura nome
		fgetc(f);

		fscanf(f, "%d", &h);	//lettura altezza
		new[i].height = (size_t)h;
		fgetc(f);

		fscanf(f, "%d", &w);	//lettura larghezza
		new[i].width = (size_t)w;
		fseek(f, 2, SEEK_CUR);

	}



	*n = dim;
	fclose(f);	//chiudere ad ogni uscita
	return new;
}

