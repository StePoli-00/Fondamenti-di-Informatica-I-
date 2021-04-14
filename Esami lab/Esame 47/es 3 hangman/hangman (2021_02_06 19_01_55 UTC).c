#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
char *hangman(const char* frase, const char* lettere) {

	if (frase == NULL)
		return NULL;
	if (lettere == NULL)
		return NULL;
	size_t n = strlen(frase);
	size_t dim = strlen(lettere);


	char *str = malloc((n + 1) * sizeof(char));
	size_t j = 0;
	char l = 0;
	
	for (size_t i = 0; i < n; i++)
	{
		bool found = 0;

		if (isalpha((int)frase[i]))
		{
			for (size_t x = 0; x < dim; x++)
			{

				if (islower((int)frase[i]))
				{
					l = tolower((int)lettere[x]);
				}
				else
				{
					l=toupper((int)lettere[x]);
				}

				if (frase[i] == l)
				{
					str[j] = frase[i];
					++j;
					found = 1;
					break;

				}

			}
			if (!found)
			{
				str[j] = '*';
				++j;
			}
		}
		else
		{		
		str[j] = frase[i];
		++j;	
		}
	}
	str[j] = 0;
	return str;





}