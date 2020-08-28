#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char *parola_piu_lunga(const char *sz)
{

	if (sz == NULL)
	{
		return NULL;
	}
	size_t n = strlen(sz);
	char *s = malloc((n+1) * sizeof(char));
	s[n]=0;
	strcpy(s, sz);
	size_t max = 0;
	size_t dim = 0;
	char *str = malloc((n + 1) * sizeof(char));
	char *best = malloc(sizeof(char));
	
	for (size_t i = 0; i < n; i++)
	{
		
		

		if (s[i] == ' ' && s[i] == '\0' && s[i] == '\t' && s[i] == '\n')
		{
			continue;
		}
		size_t j = 0;
		
		while (s[i] != ' ' && s[i] != '\0' && s[i] != '\t' && s[i] != '\n')
		{
			str[j] = s[i];
			++i;
			++j;
		}
		
			str[j] = 0;
			dim=strlen(str);
		if (dim > max)
		{
			max = dim;
			best = realloc(best, (dim + 1) * sizeof(char));
			best[dim] = 0;
			strcpy(best, str);
			
		}
		
	
	}
	free(str);
	free(s);
	return best;
}