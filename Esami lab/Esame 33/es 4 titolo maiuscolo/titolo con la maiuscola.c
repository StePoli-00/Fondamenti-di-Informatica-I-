#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"
#include <string.h>
#include <ctype.h>
char *title(const char *str)
{
	if (str == NULL)
	{
		return NULL;
	}
	size_t n = strlen(str);
	char *s = malloc((n + 1) * sizeof(char));
	s[n] = 0;
	strcpy(s, str);
	
	for (size_t i = 0; i < n; i++)
	{

		while (!isalpha(s[i])&& s[i]!='\0')
		{
			++i;
			
		}
		if (i==n)
		{
			break;
		}
		s[i] = toupper(s[i]);
		while (s[i] != ' ' && s[i]!='\0')
		{
			++i;
		}
	}
	
	return s;
	

}