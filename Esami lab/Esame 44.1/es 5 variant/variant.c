#include "variant.h"
void *read_variant(FILE *f, char *type)
{
	if (f == NULL || type == NULL)
	{
		void *a = 0;
		return a;
	}
	char c = 0;
	fread(type,sizeof(char),1,f);
	if (*type == 'c')
	{
		
		fread(type, sizeof(char), 1, f);
		void *a = malloc(sizeof(char));
		a = type;
		return a;
	}
	else if (*type =='s')
	{
		fread(type, sizeof(short), 1, f);
		void *a = malloc(sizeof(short));
		return a;
	}
	else if (*type == 'i')
	{
		fread(type, sizeof(int), 1, f);
		void *a = malloc(sizeof(int));
		return a;
	}
	else if (*type == 'l')
	{
		fread(type, sizeof(long long), 1, f);
		void *a = malloc(sizeof(long long));
		return a;
	}
	else if (*type == 'f')
	{
		fread(type, sizeof(float), 1, f);
		void *a = malloc(sizeof(float));
		return a;
	}
	else if (*type == 'd')
	{
		fread(type, sizeof(double), 1, f);
		void *a = malloc(sizeof(double));
		return a;
		
	}
	else
	{
		type= NULL;
		return type;
	}
}
