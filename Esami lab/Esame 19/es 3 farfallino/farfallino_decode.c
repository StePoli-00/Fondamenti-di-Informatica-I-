#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

char *farfallino_decode(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	size_t n = strlen(s);
	int cnt = 0;
	for (size_t i = 0; i < n; i++)
	{

		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			++cnt;
		}
	}
	char *butterfly = malloc((n -cnt+ 1) * sizeof(char));
	size_t j = 0;
	int i = 0;
	while(s[i]!='\0')
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			++i;
			if (s[i] == 'f')
			{
				++i;
				if (s[i]==s[i-2])
				{

					butterfly[j] = s[i];
					++j;
				}


			}

		}
		else
		{
			butterfly[j] = s[i];
			++j;
			++i;
		}

	}
	butterfly[j] = '\0';
	return butterfly;
	

}