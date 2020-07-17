#define _CRT_SECURE_NO_WARINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *serpentino_encode(const char *s)
{
	int n = 2;
	if (s == NULL)
	{
		return NULL;
	}
	int a = strlen(s);



	for (int i = 0; i < a; ++i)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			++n;
	}
	char *stn;
	

	stn= malloc((a+n)* sizeof(char));
	stn[a + n *2] = 0;

	int j = 0;
	for (int i = 0; i < a; ++i)

	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		{
			stn[j] = s[i];
			++j;
		
			stn[j] = 's';
			++j;
			stn[j] = s[i];

		}
		else

		{
			stn[j] = s[i];
		}
		++j;
	}
	
	
	return stn ;
	

	
	
	
	
}

