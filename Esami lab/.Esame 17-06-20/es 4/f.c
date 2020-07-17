#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *decodfica_morse(const char *codice)
{
	if( codice==NULL)
	{
		retur NULL;
	}
	size_t n = strlen(codice);
	char *str = malloc(n * sizeof(char));
	int i = 0, j = 0;
	while (codice[i] != '\0')
	{
		if (codice[i] == '.' && codice[i + 1] == '_' && codice[i + 2] == ' ')
		{
			str[j] ='A';
			++j;

		for(int k=i;i<4;++i)
		{
			if (codice[k] == '.')
				++k;
			if(codice[k] == '_' )

				&& codice[i + 2] == ' ')
		{
			str[j] = 'A';
			++j;

		}
	}



}
