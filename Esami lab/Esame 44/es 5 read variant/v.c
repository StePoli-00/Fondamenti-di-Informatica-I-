#include "variant.h"
#include <stdlib.h>

void *read_variant(FILE *f, char *type)
{

	if (f == NULL || type == NULL)
	{
		return NULL;
	}
	type = malloc(1*sizeof(char));
	/*if (!fread(type, sizeof(char), 1, f))
	{
		fclose(f);
		return NULL;
	}*/
	int i = 0;
	char t = 0;
	while(fread(&t, sizeof(char), 1, f))
	{
		if (t == 'c')
		{
		
			type = malloc(sizeof(char));
			//type= realloc(type,sizeof(char)*i + 1);
			fread(type, sizeof(char), 1, f);
			++i;
		}
		else if (t == 's')
		{
			type = malloc(sizeof(short));
			fread(type, sizeof(short), 1, f);
			++i;

		}
		else if (t == 'i')
		{
			type = malloc(1 * sizeof(int));
			fread(type, sizeof(int), 1, f);
			++i;


		}
		else if (t == 'l')
		{
			type = malloc(1 * sizeof(long long));
			fread(type, sizeof(long long), 1, f);
			++i;
		}
		else if (t == 'f')
		{
			type = malloc(1 * sizeof(float));
			fread(type, sizeof(float), 1, f);
			++i;

		}
		else if (t == 'd')
		{
			type = malloc(1*sizeof(double));
			fread(type, sizeof(double), 1, f);
			++i;
		}
		
	}
	//int *p = i;
	void *a = 0;
	return a;
}