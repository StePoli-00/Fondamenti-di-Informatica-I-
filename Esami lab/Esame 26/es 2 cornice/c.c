#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
void stampa_cornice(const char *s)
{
	if (s == NULL)
	{
		return;
	}
size_t n = strlen(s);
	printf("/-");
	for (size_t i = 0; i < n; i++)
	{
		printf("-");
	}
	printf("-\\\n");
	printf("| ");
	for (size_t i = 0; i < n; i++)
	{
		printf("%c", s[i]);
	}
	printf(" |\n");
	char c = 96;
	printf("%c", c);
	printf("-");
	for (size_t i = 0; i < n; i++)
	{
		printf("-");
	}
	printf("-'\n");
	return;







}
