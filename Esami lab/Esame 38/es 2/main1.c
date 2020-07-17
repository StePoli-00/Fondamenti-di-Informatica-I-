#include <stdio.h>
extern void elimina_consecutivi(char *str);

int main(void)
{
	char *s = "cccaaaneee";
	elimina_consecutivi(s);
	printf("%s", s);


}