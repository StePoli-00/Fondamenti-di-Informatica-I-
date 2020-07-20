#include "palindroma.h"
bool palindroma(const char *str)
{
	if (str == NULL)
	{
		return false;
	}
	
	size_t n = strlen(str);
	if (n == 1)
	{
		return true;
	}
	if (n == 0)
	{
		return false;
	}
	size_t j = n-1;
	char *s = malloc(n+1 * sizeof(char));
	s[n] = '\0';
	for (size_t i = 0; i < n; i++)
	{
		s[i] = str[j];
		--j;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] != str[i])
		{
			free(s);
			return false;
		}
	}
	free(s);
	return true;
}
