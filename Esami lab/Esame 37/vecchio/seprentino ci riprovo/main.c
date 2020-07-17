#include <stdlib.h>
extern char *serpentino_encode(const char *s);
int main(void)
{
	char a[] = "costantino";
	char *b = serpentino_encode(a);
	free(b);
	
}
