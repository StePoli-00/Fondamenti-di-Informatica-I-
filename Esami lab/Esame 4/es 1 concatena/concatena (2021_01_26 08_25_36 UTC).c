#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
char *concatena(const char *s1, const char *s2)
{
	if(s1==NULL ||s2==NULL)
	{
		return NULL;
	}
	size_t ds1 = strlen(s1);
	size_t ds2 = strlen(s2);
	char *str = malloc((ds1 + ds2 + 1) * sizeof(char));
	size_t j = 0;
	for (size_t i = 0; i < ds1; i++)
	{
		str[j] = s1[i];
		++j;
	}
	for (size_t i = 0; i < ds2; i++)
	{
		str[j] = s2[i];
		++j;
	}
	str[ds1 + ds2] = 0;
	return str;
}