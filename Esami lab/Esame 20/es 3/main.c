#include <stdlib.h>
extern void a_parole_1_999(char *sz, unsigned int i);
int main(void)
{

	unsigned int i = 1100;
	char *s = malloc(900 * sizeof(char));
	a_parole_1_999(s,i);


}