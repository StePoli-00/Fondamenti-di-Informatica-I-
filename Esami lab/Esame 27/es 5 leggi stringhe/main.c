#include "leggi_stringhe.h"
int main(void)
{
	
	char *s ="file1.bin";
	size_t size = 0;
	char **a=leggi_stringhe(s, &size);
	free(a);


}