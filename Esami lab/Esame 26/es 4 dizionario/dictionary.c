#define _CRT_SECURE_NO_WARNINGS
#include  "dictionary.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
char *find(const struct dictionary *dict, const char *key)
{
	if (dict == NULL || key == NULL)
	{
		return NULL;
	}
	int i = 0;
	bool found = 0;
	size_t n = dict->size;
	size_t j = 0;
	while (j!=n)
	{
		size_t dim = strlen(dict->data[i].key);
		char *str = malloc((dim+1)* sizeof(char));
		str[dim] = 0;
		strcpy(str, dict->data[i].key);
		if (strcmp(str, key) == 0)
		{
			found = 1;
			free(str);
			return dict->data[i].value;
		}
		++i;
		free(str);
		++j;
	}
	if (found == 0)
	{
		return NULL;
	}
	else
	{
		return NULL;
	}

}
