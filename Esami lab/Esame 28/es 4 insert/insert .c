#define _CRT_SECURE_NO_WARNINGS
#include "insert.h"

char *inserisci(const char *str, const char *news, size_t indice)
{

	if (str == NULL)
	{
		return NULL;
	}
	if (news == NULL)
	{
		return NULL;
	}
	size_t ns = strlen(str);
	if (indice > ns)
	{
		return NULL;
	}
	size_t j = 0;
	
	size_t nn = strlen(news);
	char *s = malloc((nn + ns+1) * sizeof(char));
	
	for (size_t i = 0; i <= ns; ++i)
	{
		if (i==indice)
		{
			for (size_t k = 0; k < nn; ++k)
			{
				s[j] = news[k];

				++j;
			}
			
				s[j] = str[i];
				++j;
			
			
		}
		else
		{
			
				s[j] = str[i];
				++j;
			

		}
	}
	
	return s;

}