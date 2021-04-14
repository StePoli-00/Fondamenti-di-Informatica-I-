//#include "nonogram.h"
//bool nonogram_load(struct nonogram* ng, const char* filename)
//{
//
//	if (ng == NULL || filename == NULL)
//	{
//		return  false;
//	}
//	FILE *f = fopen(filename, "r");
//	if (f == NULL)
//	{
//		
//
//		return false;
//	}
//	fscanf(f, "%zu",&ng->n);
//	fgetc(f);
//	ng->schema = malloc(255*sizeof(char));
//	size_t i = 0;
//	size_t dim = 0;
//	size_t new_size = 0;
//	char *p = malloc(255 * sizeof(char));
//	while (fscanf(f, "%[^\n]", p)!=EOF)
//	{
//		dim = strlen(p);
//		new_size += dim;
//		ng->schema = realloc(ng->schema, sizeof(char)*(new_size + 1));
//		for (size_t j = 0; j < dim; j++)
//		{
//			ng->schema[i] = p[j];
//			++i;
//
//		}
//		fgetc(f);
//	}
//	free(p);
//	ng->schema[i] = 0;
//	fclose(f);
//	return true;
//
//
//}
