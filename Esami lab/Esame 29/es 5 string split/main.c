#include "string_split.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	char s[] = { "alfabetizzazione" };
	size_t index = 6;
	char *s1;
	char *s2;
	string_split(s, index, &s1, &s2);



}