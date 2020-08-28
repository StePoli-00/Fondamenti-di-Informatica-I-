#include <stdlib.h>
#include <string.h>
#include <math.h>

char *somma_stringhe(const char *a, const char *b)
{
	if( a==NULL|| b==NULL)
	{
		return NULL;
	}

	size_t  n = 0;
	if (strlen(a) > strlen(b))
	{
		n = strlen(a);
	}
	else
	{
		n = strlen(b);

	}
	
	long long n1 = atol(a); 
	long long n2 = atol(b);
	long long sum = n1+ n2;
	int cnt = 0;
	long long val = sum;
	while (val!= 0)
	{
		val /= 10;
		++cnt;
	}
	char *str = malloc((cnt+1) * sizeof(char));
	
	int i = cnt;
	n = i;
	while(i!=0)
	{
		
		str[i-1] =(sum % 10)+48;
		sum /= 10;
		--i;
		
	}
	
	str[cnt] ='\0';
	return str;



}