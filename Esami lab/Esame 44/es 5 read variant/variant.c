#include "variant.h"
#include <stdlib.h>

void *read_variant(FILE *f, char *type)
{
	
	if (f == NULL || type == NULL)
	{
		return NULL;
	}	

	while (fread(type,sizeof(char),1,f))
	{

		if (*type == 'c')
		{
			type = malloc(sizeof(char));
			fread(type, sizeof(char), 1, f);

		}
		else if (*type == 's')
		{
			type = malloc(sizeof(short));
			fread(type, sizeof(short), 1, f);


		}
		else if (*type == 'i')
		{
			type = malloc(sizeof(int));
			fread(type, sizeof(int), 1, f);



		}
		else if (*type == 'l')
		{
			type = malloc(sizeof(long long));
			fread(type, sizeof(long long), 1, f);

		}
		else if (*type == 'f')
		{
			type = malloc(sizeof(float));
			fread(type, sizeof(float), 1, f);


		}
		else if (*type == 'd')
		{
			type = malloc(sizeof(double));
			fread(type, sizeof(double), 1, f);

		}
		else 
		{
			return NULL;
		}

		

	}
	void *a = malloc(sizeof(1));
	return  a;
}