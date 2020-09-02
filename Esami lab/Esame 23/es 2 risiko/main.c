#include "risiko.h"
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	struct lancio attacco = { {4,1,5},3 };
	struct lancio difesa = { {6,3,1},3 };
	char pa = 0;
	char pd = 0;
	confronta_lanci(&attacco, &difesa, &pa, &pd);



}