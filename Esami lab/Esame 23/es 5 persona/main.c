#include "persona.h"
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	char s[] = { "file1.txt" };
	size_t n = 0;
	struct persona *lette = leggi_persone(s, &n);
	free(lette);

}