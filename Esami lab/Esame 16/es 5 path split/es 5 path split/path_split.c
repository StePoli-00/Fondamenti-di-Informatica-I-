#include "path_split.h"
void path_split(const char *str, char **path, char **filename)
{
	if (str != NULL)
	{
		size_t a = strlen(str);
		int n = a-1;
		int c = 0;
		while (str[n] != 0)
		{
			if (str[n] =='\\')
			{
				
				break;
			}
			++c;
			--n;
			

		}
		char *nome = malloc((c+1) * sizeof(char));
		nome[c] = 0;
		for (int i = c; i!=0; --i)
		{
			nome[i-1]=str[a-1];
			--a;

		}
		
		
		char *perc = malloc((a -c + 1) * sizeof(char));
		perc[a - c] = 0;
		for (int i=n-1; n!=0; --i)
		{
			perc[i] = str[n];
			--n;
		}
		*path = nome;
		*filename = perc;

	}
	else
	{
		**path = 0;
		**filename = 0;
	}
}