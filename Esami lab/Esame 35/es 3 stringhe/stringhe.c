#include "stringhe.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
char *zfill(const char *str, size_t n)
{
	if (str == NULL)
	{
		return NULL;
	}
	if ( strlen(str)>= n)
	{
		size_t a = strlen(str);
		char *s = malloc((a+1) * sizeof(char));
		int i = 0;
		while (i != a)
		{
			s[i] = str[i];
			++i;
		}
		s[i] = '\0';
		return s;

	
	}
	else
	{
		size_t a = strlen(str);
		char *s = malloc((n+ 1) * sizeof(char));
		s[n] = '\0';
		unsigned int j = n - 1;
		unsigned int i = a;
		while(i!=0)
		{
			s[j] = str[i-1];
			--i;		
			--j;
		}
		while (j != 0)
		{
			s[j] ='0';
			--j;

		}
		s[j] = '0';
		return s;
	}
	


}