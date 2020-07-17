#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern void stampa_tavola_pitagorica(FILE *f, unsigned int n);

int main(void)
{
	FILE *f = fopen("file.txt", "w");
	if (f != NULL)
	{
		stampa_tavola_pitagorica(f, 10);

	}
	

}