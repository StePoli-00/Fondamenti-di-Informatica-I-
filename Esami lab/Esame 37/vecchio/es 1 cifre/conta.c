#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
unsigned int contanumeri(const char *nomefile)
{
	int c = 0;
	int conta = 0;

	FILE *f = fopen(nomefile, "r");
	if (f == NULL)
		return 0;


	while ((c = fgetc(f)) != EOF) {
		if (isdigit(c) == 1)
			conta = conta + 1;
	}

	fclose(f);
	return conta;
}