#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
char *unici(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	size_t n = strlen(s);
	char *str = calloc(n+1,sizeof(char));
	size_t new_size = 0;
	for (size_t i = 0; i<n+1; i++)
	{
		
		char *p =strchr(str, s[i]);
		if (p == NULL)
		{
			str[new_size] = s[i];
			++new_size;
		}


	}
	str[new_size]='\0';
	return str;


}