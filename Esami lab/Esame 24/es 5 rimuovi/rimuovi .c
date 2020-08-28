#define _CRT_SECURE_NO_WARNINGS
#include "rimuovi.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
void rimuovi_stringa(char *parola, const char *str)
{
	if (str == NULL || parola == NULL)
	{
		return;
	}
	size_t n = strlen(parola);
	char *s = malloc((n + 1) * sizeof(char));
	s[n] = '\0';
	size_t k = 0;
	size_t q = 0;
	size_t size = 0;
	for (size_t i = 0; i < n; ++i)
	{
		if (parola[i] == str[k])
		{
			int j = i + 1;
			int cnt = 0;
			bool is = false;

			while (str[k] != '\0')
			{
				++k;
				if (parola[j] == str[k])
				{
					is = true;
					++cnt;

				}
				++j;
			}
			k = 0;
			if (is == false)
			{
				s[q] = parola[i];
				++q;
				++size;
			}
			else
			{
				i += cnt ;
			}

		}
		else
		{

			s[q] = parola[i];
			++q;
			++size;


		}

	}
	
	 s[q] = '\0';
	 strcpy(parola, s);
	 free(s);
	 return;

}






