#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *sottrai_stringhe(const char *a, const char *b)
{

	if (a == NULL || b == NULL)
	{
		return NULL;
	}
	if (strcmp(a, b) == 0)
	{
		char *c = malloc(2 * sizeof(char));
		c[0] = 48;
		c[1] = '\0';
		return c;
	}
	long long n1 = atol(a);
	long long n2 = atol(b);
	long long n3 = 0;
	if (n1 > n2)
	{
		n3 = n1 - n2;
	}
	else
	{
		n3 = n2 - n1;
	}
	long long val = n3;
	int cnt = 0;
	while (val != 0)
	{
		val /= 10;
		++cnt;
	}
	char *c = malloc((cnt + 1) * sizeof(char));
	c[cnt] = '\0';
	for (int i = cnt-1; i>=0 ;--i)
	{
	
		c[i] =( n3 % 10)+48;
		n3 /= 10;

	}
	return c;



}