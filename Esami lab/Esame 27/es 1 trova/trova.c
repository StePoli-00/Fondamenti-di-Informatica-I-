#define _CRT_SECURE_NO_WARNINGS
#include "trova.h"
int trova_diverso_dalla_fine(const char *str, char c)
{
	if (str == NULL )
	{
		return -1 ;
	}
	size_t  n = strlen(str);
	if (n <= 0)
	{
		return -1;
	}

	
	char *s = malloc((n+1) * sizeof(char));
	strcpy(s, str);
	if (n == 1)
	{
		if (s[0] != c) {
			free(s);
			return 0;
		}
		else
		{
			free(s);
			return -1;
		}

	}
	size_t i =n;
	while (i!=0)
	{
		--i;
		if (s[i] != c)
		{
			free(s);
			return i;
		}
		
	

	}
	/*if (i == 0 && s[i] != c)
	{
		return i;
	}*/
	free(s);
	return -1;

}
