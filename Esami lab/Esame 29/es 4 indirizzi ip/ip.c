#define _CRT_SECURE_NO_WARNINGS
#include "ip.h"
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
uint32_t *leggi_indirizzi_ip(const char *filename, size_t *size)
{
	/*size_t a = 1;
	per stampare size_t %zu
	per stampare unsigend int %u
	printf("%zu", a);*/
	if (filename == NULL || size == NULL)
	{
		*size = 0;
		return NULL;
	}
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		*size = 0;
		return NULL;
	}

	FILE *g = fopen("new.ip", "w");

	char *s = malloc(255 * sizeof(char));
	size_t n = 0;
	while (fscanf(f, "%s", s) != EOF)
	{
		
		++n;
	}
	
	rewind(f);
	uint32_t *num = malloc(n * sizeof(uint32_t));
	size_t j = 0;
	size_t i = 0;
	while (fscanf(f, "%s", s) != EOF)
	{
		
		char *val = malloc((i + 1) * sizeof(char));
		val[i] = 0;
		strncpy (val,s,i);
		converti(val,i);
	
		
	}
	for (size_t i = 0; i < n; i++)
	{
		printf("%#x", num[i]);
		printf("\n");

	}
	
	



}