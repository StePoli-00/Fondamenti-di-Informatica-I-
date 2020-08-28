#define _CRT_SECURE_NO_WARNINGS
#include "insert.h"

char *inserisci(const char *str, const char *news, size_t indice) {

	if (str == NULL || news == NULL)
		return NULL;

	size_t l = strlen(str);
	size_t len = strlen(news);

	if (indice > l)	//controllo lunghezza
		return NULL;
	size_t n = l + len + 1;
	char *strnew = malloc((n) * sizeof(char));
	strnew[l + len] = 0;
	if (len == 0)
	{
		strnew = strcpy(strnew, str);
		return strnew;
	}
	
	int j = 0;
	int k = 0;
	strnew[0] = ' ';

	
	while(strnew[j]!=0)
	{	
		if (j == indice)
		{
			int x= 0;
			while (news[x] != 0)
			{
				strnew[j] = news[x];
				++j;
				++x;

			}
			
		}
		else
		{
			strnew[j] = str[k];
			++j;
			++k;
		
		}
		
	}

	return strnew;

}