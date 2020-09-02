#include "razionali.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	struct fraz a = { 5, 7 };
	struct fraz b = { -10,14 };
	struct fraz ris;
	fr_somma(&ris, &a, &b);
}