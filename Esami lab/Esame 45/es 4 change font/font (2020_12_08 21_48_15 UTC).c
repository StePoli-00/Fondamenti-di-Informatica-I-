#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
char *change_font(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	size_t n = strlen(s);
	char *str = malloc((n + 1) * sizeof(char));
	str[n] = 0;
	strcpy(str, s);
	char *p = NULL;
	p = strstr(str, "SEI");
	while (p != NULL)
	{
		if (p != NULL)
		{
			p[0] = (6 + 48);
			p[1] = ' ';
			p[2] = ' ';

			p = strstr(str, "SEI");
		}
	}
	p = strstr(str, "PER");
	while (p != NULL)
	{
		
		if (p != NULL)
		{
			p[0] = 'X';
			p[1] = ' ';
			p[2] = ' ';
		}
		p = strstr(str, "PER");
	}
	free(p);
	for (size_t i = 0; i < n; i++)
	{
		if (str[i] == 'A')
		{
			str[i] = (4+48);
		}
		else if(str[i] == 'E')
		{
			str[i] = (3+ 48);
		}
		else if (str[i] == 'I')
		{
			str[i] = (1 + 48);
		}
		else if (str[i] == 'O')
		{
			str[i] = (0 + 48);
		}
		else if (str[i] == 'S')
		{
			str[i] = (5 + 48);

		}
	}
	n = strlen(str);
	char *new = malloc((n + 1) * sizeof(char));
	size_t j = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (str[i] == 'X' || str[i] == '6')
		{
			
			new[j] = str[i];
			++j;
			++i;
			while (str[i] == ' ')
			{
				++i;
			}
		}
		new[j] = str[i];
		++j;
	}
	new[j] = 0;
	free(str);
	return new;
	
	

}
