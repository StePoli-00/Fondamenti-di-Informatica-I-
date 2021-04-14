#include <string.h>
#include <stdint.h>
#include <stdio.h>
extern int accodaTuttiFile(const char *fileConNomi, const char *fileOutput);
int main(void)
{
	char s[] = "es5_elenco.txt";
	char s2[] = "new.bin";
	accodaTuttiFile(s, s2);

}