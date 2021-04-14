#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"
struct stringa *read_stringhe_bin(const char *filename, unsigned int *pn)
{
	if (filename == NULL || pn == NULL)
	{
		*pn = 0;
		return NULL;
	}
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		*pn = 0;
		return NULL;
	}
	unsigned char num = 0;
	unsigned int cnt = 0;
	char s[255];
	while (fread(&num, sizeof(unsigned char), 1, f))  //conto quante parole ci sono nel file
													//uso s altrimenti l'fread leggerebbe anche  i char della parola
	{
		fread(s, sizeof(char), num, f);
		*s = 0;
		num=0;
		++cnt;
	}
	if (cnt == 0)
	{
		*pn = 0;
		return NULL;
	}
	rewind(f); //importantissima
	struct stringa *str=malloc(cnt*sizeof(struct stringa)); //alloco spazio per i dati
	num = 0;
	for (size_t i = 0; i < cnt; i++)
	{
		fread(&num, sizeof( unsigned char), 1, f);  //leggo il numero di caratteri
		str[i].s = malloc((num + 1) * sizeof(char));//alloco spazio per la stringa 
		str[i].length = num; // metto in lenght la lunghezza della stringa
		fread(str[i].s, sizeof(char), num, f); //metto la parola nella struct
		str[i].s[num] = 0; //metto lo zero terminato
		num = 0; //non sarebbe necessario ma non si sa mai
	}
	*pn = cnt;
	fclose(f);
	return str;
	

}