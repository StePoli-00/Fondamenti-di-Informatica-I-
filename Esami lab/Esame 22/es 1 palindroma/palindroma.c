#include "palindroma.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
bool palindroma(const char *str)
{
	if (str == NULL)
	{
		return false;

	}
	size_t n = strlen(str);
	if (n == 0)
	{
		return false;
	}
	if (n == 1)
	{
		return true;
	}
	char *s = malloc((n + 1)*sizeof(char));
	s[n] = '\0';
	size_t j = 0;
	
	for (size_t i =n-1; i!=0; i--)
	{
		s[j] = str[i];
		++j;
	}
	s[j] = str[0];

	bool is = false;
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == str[i])
		{
			is = true;
		}
		else
		{
			free(s);
			return false;
		}
	}
	free(s);
	return true;

}