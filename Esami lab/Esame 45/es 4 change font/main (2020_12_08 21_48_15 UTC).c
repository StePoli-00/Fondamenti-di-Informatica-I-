#include <stdint.h>
#include <stdlib.h>
extern char *change_font(const char *s);
int main(void)
{
	char s[] = { "SEI PER SEI TRENTASEI" };
	change_font(s);

}