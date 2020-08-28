#define _CRT_SECURE_NO_WARNINGS
#include "variant.h"
int main(void)
{
	FILE *f = fopen("file1.variant", "rb");
	if (f != NULL)
	{
		char c = 1;
		read_variant(f, &c);
	}


}