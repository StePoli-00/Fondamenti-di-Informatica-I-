#include "path_split.h"

int main(void)
{
	char s[] = " c:\\user\\esami\\FdI2017\\esercizi\\file.txt";
	char *filename;
	char *path;
	path_split(s, &path, &filename);


}



