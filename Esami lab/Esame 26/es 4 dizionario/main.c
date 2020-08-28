#include "dictionary.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	struct pair p={ "larghezza","125" };
	struct pair p1 = { "altezza","278" };
	struct pair p2 = { "colore","FF235B" };
	size_t dim = strlen(p.key);
	size_t dim1 = strlen(p1.key);
	size_t dim2 = strlen(p2.key);
	struct pair s[] = { p,p1,p2 };
	struct dictionary d= {3,s };
	char *f = find(&d, "altezza");
}