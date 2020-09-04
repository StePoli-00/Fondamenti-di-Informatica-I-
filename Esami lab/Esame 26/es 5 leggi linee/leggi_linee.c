#define _CRT_SECURE_NO_WARNINGS
#include "leggi_linee.h"

char **leggi_linee(const char *filename)
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
	char **letti =malloc(sizeof(char *));
	size_t dim = 0;
	int i = 0;
	char c = 0;
	while ((c=fgetc(f))!= EOF)
	{
		if (c == '\n')
		{
			while (c == '\n')
			{
				c = fgetc(f);
			}
		}
		if(c!='\n')
		{
			fseek(f, -1, SEEK_CUR);
		}
		if (c == EOF)
		{
			break;
		}
		char *s = malloc(255 * sizeof(char));
		fscanf(f, "%[^\n]", s);
		dim = strlen(s);
		s[dim] = 0;
		letti[i] =malloc((dim + 1)*sizeof(char));
		letti[i][dim] = 0;
		strcpy(letti[i], s);
		/*for (size_t j = 0; j < dim; j++)
		{
			letti[i][j] = s[j];
		}*/
		++i;
		letti=realloc(letti, sizeof(char *)*(i+1));
		free(s);
	}
	
	letti = realloc(letti, sizeof(char *)*(i + 1));
	letti[i] = NULL;
	fclose(f);
	return letti;
}