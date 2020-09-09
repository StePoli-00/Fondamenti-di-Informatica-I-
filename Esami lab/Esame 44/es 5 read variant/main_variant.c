#define _CRT_SECURE_NO_WARNINGS
#include "variant.h"
int main(void)
{
	FILE *f = fopen("file1.variant", "rb");
	if (f != NULL)
	{

		char *p = malloc(sizeof(char));
		read_variant(f,p);
		read_variant(f, p);
		read_variant(f, p);
		read_variant(f, p);
	}


}