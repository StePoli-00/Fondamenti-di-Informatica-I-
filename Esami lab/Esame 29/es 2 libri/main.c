#define _CRT_SECURE_NO_WARNINGS
#include "libri.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	
	FILE *f = fopen("new.bin", "wb");
	if(f!=NULL)
	{ 
	uint16_t v[] = { 2001,2002,0 };
	struct libro l = { "geometria",v };
	libro_scrivi(&l, f);
	}

}