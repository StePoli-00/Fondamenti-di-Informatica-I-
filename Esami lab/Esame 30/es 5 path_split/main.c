#include "path_split.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{

	char s[] = { "c:\\user\\esami\\FdI2017\\esercizi" };
	size_t n = strlen(s);
	char *path;
	char *filename;
	path_split(s, &path, &filename);
	int a = 0;
	free(filename);
	free(path);
}