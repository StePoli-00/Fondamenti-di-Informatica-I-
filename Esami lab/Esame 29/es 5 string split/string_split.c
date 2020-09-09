#define _CRT_SECURE_NO_WARNINGS
#include "string_split.h"
void string_split(const char *str, size_t index, char **s1, char **s2)
{
	if (str == NULL || s1 == NULL || s2 == NULL)
	{
		return;
	}
	size_t n = strlen(str);
	if (index > n)
	{
		*s1 = NULL;
		*s2 = NULL;
		return;
	}
	*s1 = malloc((index + 1) * sizeof(char));
	s1[0][index] = 0;
	size_t dim = n - index;
	*s2 =malloc((dim + 1) * sizeof(char));
	s2[0][dim] = 0;
	size_t j = 0;
	for (size_t i = 0; i < index;i++)
	{
		s1[0][i] = str[j];
		++j;
	}
	for (size_t i = 0; i < dim; i++)
	{
		s2[0][i] = str[j];
		++j;
	}

	return;

}