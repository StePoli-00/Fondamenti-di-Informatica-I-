#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *farfallino_decode(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	size_t n= strlen(s);
	size_t cnt = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
		{
			++i;
			if (s[i] == 'f')
			{
				++i;
				if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
				{
					++cnt;
				}
			}
		}
		else
		{
			++cnt;
		}
	}
	char *str = malloc((cnt + 1) * sizeof(char));
	str[cnt] = 0;
	size_t j = 0;
	for (size_t i = 0; i <n; i++)
	{
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
		{
			++i;
			if (s[i] == 'f')
			{
				++i;
				if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
				{
					str[j] = s[i];
					++j;
				}
			}
		}
		else
		{
			str[j] = s[i];
			++j;
		}
	}
	return str;
}