#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>	
extern bool is_date(const char *s);
int main(void)
{
	char s[] = { "10/07/2015" };
	is_date(s);

}
