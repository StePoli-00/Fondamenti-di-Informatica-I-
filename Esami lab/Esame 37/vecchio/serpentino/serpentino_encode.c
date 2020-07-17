#include <ctype.h>
#include <stdlib.h>
#include <string.h>
char *serpentico_encode(const char *s)
{
	int a = strlen(s);
	char *stn = malloc((a*3) * sizeof(char));


	int j = 0;
	for (int i = 0; i < a; ++i)

	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		{
			stn[j] = s[i];
			++j;
			stn[j] = 's';
			++j;
			stn[j] = s[i];

		}
		else
		{
			stn[j] = s[i];
		}
		++j;
	}
	
	return stn;
	free(stn);
	}

	