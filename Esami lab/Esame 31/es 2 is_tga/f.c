#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_tga(const char *filename) {

	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		return false;
	}
	char s[18];
	fseek(f, -18, SEEK_END);
	fread(s, 1, 18, f);
	if (strcmp("TRUEVISION-XFILE.", s) == 0)
	{
		fclose(f);
		return true;
	}

	fclose(f);
	return false;


}