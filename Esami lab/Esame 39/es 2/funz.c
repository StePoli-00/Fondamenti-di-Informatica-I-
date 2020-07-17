#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
bool inverti_case(const char *nomefilein, const char *nomefileout)
{
	if(nomefilein==NULL ||  nomefileout==NULL)
		{
			return NULL;
		}
	FILE *f = fopen(nomefilein, "r");
	FILE *g= fopen(nomefileout, "w");
	if (f == NULL || g==NULL)
	{
		fclose(f);
		fclose(g);
		return false;


	}
	char c = fgetc(f);
	while (c != EOF)
	{
		if (islower(c)&& isalpha(c))
		{
			c = toupper(c);
			fprintf(g,"%c",c);

		}

		else if(isupper(c) && isalpha(c))
		{
			c = tolower(c);
			fprintf(g, "%c", c);
		}
		else 
		{
			fprintf(g,"%c", c);
		}

		c = fgetc(f);
	}
	fclose(f);
	fclose(g);
	return true;
}
