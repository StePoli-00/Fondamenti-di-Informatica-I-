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

	size_t len = strlen(frase);
	size_t len1 = strlen(lettere);
	size_t i = 0;
	char*ris1 = malloc((len1 + 1) * sizeof(char));
	//char *ris = malloc((len + 1) * sizeof(char));
	for (i = 0; i < len1; i++)
	{
		ris1[i] = lettere[i];
		ris1[i] = toupper(ris1[i]);

	}
	ris1[i] = 0;

	char *ris = malloc((len + 1) * sizeof(char));
	size_t k = 0;
	for (k = 0;  k<len; k++)
	{
		i = 0;
		while (lettere[i] != 0) {
			if (!isalpha(frase[k])) {
				ris[k] = frase[k];

				break;

			}

			else if (frase[k] == lettere[i]) {
				ris[k] = lettere[i];

				break;
			}
			else if (frase[k] == ris1[i]) {

				ris[k] = ris1[i];
				break;
			}

			else if (frase[k] != lettere[i]) {
				ris[k] = '*';
				i++;
				continue;
			}


		}

		

	}
	ris[k] = 0;
	free(ris1);
	return ris;




}