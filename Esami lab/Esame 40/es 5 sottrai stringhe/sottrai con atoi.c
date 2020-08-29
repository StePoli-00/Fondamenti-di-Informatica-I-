#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char *sottrai_stringhe(const char *a, const char *b) {
	if (a == NULL || b == NULL)
		return NULL;
	if (a == b)
	{
		char *ris = malloc((2)*sizeof(char));
		ris[0] = 48;
		ris[1] = 0;
		return ris;
	}


	long int a1 = atoi(a);
	long int b1 = atoi(b);
   long int ris = a1 - b1;
	long int val = ris;//variabile di appoggio che contiene il risultato che altrimenti andrebbe a perdersi dopo averlo diviso per 10 ogni volta
	size_t  cnt = 0;
	while (val != 0)//conto da quante cifre è composto il numero
	{
		val/= 10;//decremento le unita di 10 in 10
		++cnt;
	}
	val = ris;

	char *c = malloc((cnt+1)* sizeof(char));
	c[cnt] = '\0';
	for (size_t i = cnt; i != 0;--i)
	{
		char num = val % 10;//prendo il singolo numero partendo dalla fine del numero fino all'inizio
		val /= 10;
		c[i-1] = num+48;//converto il numero in un carattere numerico aggiungendo +48(zero)
	}

	return  c;
}