#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *spacefill(const char *str, size_t n)
{
 if( str==NULL)
	{
		return NULL;
	}
	size_t lun = strlen(str);
	if (lun >= n)
	{
		
		char *s = malloc((lun+1) * sizeof(char));
		int i = 0;
		while (i!=lun)
		{
			s[i] = str[i];
			++i;
		}
		s[i] = '\0';
		return s;
		
		
	}
	else
	{
		char *s = malloc((n+1) * sizeof(char));
		
		
		s[n] = '\0';
	unsigned int  i = lun;
	unsigned int j = n-1;
		while (i!= 0)
		{
			s[j] = str[i-1];
			--i;
			--j;
		}
		
		for (j;j!=0;--j)
		{	
			s[j] = ' ';
		
		}
		s[j] = ' ';
		return s;
	}




}