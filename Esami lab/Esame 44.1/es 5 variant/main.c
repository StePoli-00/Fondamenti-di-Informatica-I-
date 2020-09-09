#define _CRT_SECURE_NO_WARNINGS
#include "variant.h"


int main(void)
{
	char s[] = { "file1.variant" };
	FILE  *f = fopen(s, "rb");
	if (f != NULL)
	{
		char type = 0;
		void *a = read_variant(f,&type); 
		 a = read_variant(f, &type);
		 a = read_variant(f, &type);
		 a = read_variant(f, &type);
		 a = read_variant(f, &type);
	}


}