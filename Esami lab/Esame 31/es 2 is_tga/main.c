#include "f.h"
#include <stdbool.h>
extern bool is_tga(const char *filename);
int main(void)
{
	char *s = "marbles.tga";
	is_tga(s);



}
