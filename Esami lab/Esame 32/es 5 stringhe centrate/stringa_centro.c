#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
char *center(const char *str, size_t n, char c)
{
	if (str == NULL)
	{
		return NULL;
	}
	size_t dim = strlen(str);
	if (dim >= n)
	{
		char *s = malloc((dim+1)* sizeof(char));
		s[dim] = 0;
		strcpy(s, str);
		return s;
	}
	size_t prima = 0;
	size_t dopo = 0;
	if (n % 2 == 0 && dim % 2 != 0)
	{
		prima = ((n-dim) / 2);
		dopo = ((n-dim) / 2) + 1;
	}
	else if (n % 2 != 0 && dim % 2 == 0)
	{
		prima = ((n-dim) / 2)+1;
		dopo = ((n-dim) / 2) ;

	}
	else 
	{
		prima = ((n - dim) / 2);
		dopo = ((n - dim) / 2);
	}
		
		char *s = malloc((n + 1) * sizeof(char));
		s[n] = 0;
		size_t j = 0;

		for ( size_t i=0; i <prima ; i++)
		{
			s[j] = c;
			++j;
		}

		for (size_t i = 0; i <dim; i++)
		{
			s[j] = str[i];
			++j;
			
		}

		for (size_t i = 0; i <dopo; i++)
		{
			s[j] = c;
			++j;
		}
		return s;

}