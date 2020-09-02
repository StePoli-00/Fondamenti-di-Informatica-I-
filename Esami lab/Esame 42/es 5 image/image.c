#define _CRT_SECURE_NO_WARNINGS
#include "images.h"
struct image *read_images(const char *filename, size_t *n)
{
	if (filename == NULL)
	{
		return NULL;
	}
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		return NULL;
	}
	char *s = malloc(255 * sizeof(char));
	size_t dim = 0;
	while (fscanf(f, "%s", s)!=EOF)
	{
		++dim;
	}
	free(s);
	rewind(f);
	if (dim == 0)
	{
		*n = 0;
		fclose(f);
		return NULL;
	}
	struct image *imm = malloc(dim*sizeof(struct image));
	for (size_t i = 0; i < dim; i++)
	{
		
		fscanf(f, "%[^':']", imm[i].name);
		fseek(f, +1, SEEK_CUR);
		int h = 0;
		fscanf(f, "%d",&h);
		imm[i].height = (size_t)h;
		int w = 0;
		fseek(f, 1, SEEK_CUR);
		fscanf(f, "%d",&w);
		imm[i].width =(size_t )w;
		fseek(f, 2, SEEK_CUR);
		
	}
	*n = dim;
	fclose(f);
	return imm;

}