#define _CRT_SECURE_NO_WARNINGS
#include "html.h"
#include <stdio.h>
#include <stdbool.h>
bool check(char c, FILE *f)
{ 
	int i = 0;
	while (c != EOF)
	{

		if (c == '>')
		{
			fseek(f, -i, SEEK_CUR);
			return true;
		}
		++i;
		c = fgetc(f);
	}
	return false;


}
int rimuovi_html(const char *filein, const char *fileout)
{
	if (filein == NULL)
	{
		return -1;
	}
	if(fileout == NULL)
	{
	 return -1;
	}
	
	FILE *f = fopen(filein, "r");
	FILE *g = fopen(fileout, "w");
	if (f == NULL)
	{
		fclose(g);
		return -1;
	}
	else
	{
	char c = 0;
	while ((c = fgetc(f))!= EOF)
	{
		
		if(c== '<')
		{
			bool is = check(c, f);
			if (is == false)
			{
				fclose(f);
				fclose(g);
				return -1;
			}
			{
				while ((c = fgetc(f)) != '>'  && c != EOF)
				{

				}
				c = fgetc(f);
			}
			
			if (c == '\n')
			{
				printf("\n");
			}

			


		}
		if (c == EOF)
		{
			fclose(f);
			fclose(g);
			return 0;
			
		}
		if (c == '\n')
		{
			printf("\n");
		}
		else if (c != '<') {
			
			while (c!= '<' && c!= EOF)
			{
				fprintf(g, "%c", c);
				c = fgetc(f);
			}
			while ( c != '>' && c != EOF)
			{
				c = fgetc(f);
			}
			c = fgetc(f);
			fprintf(g,"%c", c);
			


		}


	}
	fclose(f);
	fclose(g);
	return -1;


	}


}