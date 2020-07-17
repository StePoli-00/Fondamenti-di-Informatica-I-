#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

void elimina_consecutivi(char *str)
{
	if (str == NULL)
	{
		return;
	}
	size_t n = strlen(str);
	int j = 0;
	int i = 0;
	int cnt = 0;
	while (i != n)
	{
		if (str[i] != str[i + 1])
		{

			++cnt;
		}
		++i;


	}
	char *s = malloc((cnt+1) * sizeof(char));
	for (int i = 0; i < n; ++i)
	{
		if (str[i] != str[i + 1])
		{
			s[j] = str[i];
			++j;
		}


	}
	

s[j] ='\0';

str = realloc(str ,sizeof(char)*(j+1));
strcpy(str, s);

	/*while (s[j] != '\0')
	{

		str[j] = s[j];
		++j;
		
	}
	str[j] = '\0';*/
free(s);
	return;
	


}