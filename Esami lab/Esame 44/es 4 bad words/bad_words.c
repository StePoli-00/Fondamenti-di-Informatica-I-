#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void bad_word_filter(char *s, char **words, size_t nwords)
{
	
	if (s == NULL || words == NULL || nwords == 0)
	{
		return;
	}
	size_t n = strlen(s);
	if (n == 0)
	{
		return;
	}
	size_t dim = 0;
	char *new_w = malloc(n * sizeof(char));
	char *p = malloc(sizeof (char));
	for (size_t i = 0; i < nwords; i++)
	{
		
		while ((p = strstr(s, words[i])) != NULL)
		{

			if (p == NULL)
			{
				break;
			}
			dim = strlen(words[i]);
		
			for (size_t i = 0; i < dim; i++)
			{
				new_w[i] = '*';

				//s[(p - s) + i] = '*';
			}
			strncpy(p, new_w, dim);
		
		}
	}
	free(new_w);
	return;
}