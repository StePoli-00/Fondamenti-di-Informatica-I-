#include <stdio.h>
#include <string.h>
extern void stampa_cornicetta(const char *s)
{
	if (s == NULL)
	{
		return;
	}
	size_t n = strlen(s);
	printf("+===");

	for(size_t i = 0; i < n; i++)
		{
		printf("=");
		}
	printf("===+\n");
	printf("| *-");
	for (size_t i = 0; i < n; i++)
	{
		printf("-");
	}
	printf("-* |\n");
	printf("| | ");
	for (size_t i = 0; i < n; i++)
	{
		printf("%c",s[i]);

	}
	printf(" | |\n");
	printf("| *-");
	for (size_t i = 0; i < n; i++)
	{
		printf("-");
	}
	printf("-* |\n");
	printf("+===");

	for (size_t i = 0; i < n; i++)
	{
		printf("=");
	}
	printf("===+\n");
	return;




}
