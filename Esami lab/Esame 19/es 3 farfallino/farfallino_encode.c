#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
char *farfallino_encode(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	size_t n = strlen(s);
	int cnt = 0;
	for (size_t i = 0; i < n; i++)
	{

		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||
			s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			++cnt;
		}
	}
	char *butterfly = malloc((n + (cnt * 2)+1) * sizeof(char));
	size_t  dim = n + (cnt * 2) + 1;
	size_t j = 0;
	for (size_t i = 0; i < dim; i++)
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||
			s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			butterfly[j] = s[i];
			++j;
			butterfly[j] = 'f';
			++j;
			butterfly[j] = s[i];
			++j;
		}
		else
		{
			butterfly[j] = s[i];
			++j;
		}
	}
	butterfly[j] = '\0';
	return butterfly;


}

