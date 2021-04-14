#include <stdlib.h>
#include<string.h>
char *rimuovi_singoli_spazi(const char *s)
{
	size_t n = strlen(s);
	if (s == 0)
	{
		return NULL;
	}
	char *str = malloc((n + 1) * sizeof(char));
	size_t j = 0;
	size_t cnt = 0;
	for (size_t i = 0; i < n; i++)
	{
		if(s[i]!=' ')
		{
			str[j] = s[i];
			++j;
			++cnt;
		}

		else if (s[i + 1] ==' ')
		{
			while (s[i] == ' ')
			{
				str[j] = s[i];
				++i;
				++j;
				++cnt;
			}
			--i;
		}
	}

	str[cnt] = 0;
	return str;

}