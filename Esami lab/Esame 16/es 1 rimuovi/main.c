#include <stdint.h>
#include <stdlib.h>
extern int rimuovidoppie(const char *filein, const char *fileout);
int main(void)
{
	char s[] = { "testo3.txt" };
	char s1[] = { "new.txt" };
	int n = rimuovidoppie(s, s1);
}