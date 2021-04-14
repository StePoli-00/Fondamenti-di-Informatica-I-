#include <stdint.h>
#include <stdlib.h>
extern uint8_t *nonogram_row(const char *s, size_t *n);
int main(void)
{
	char s[] = { " * **** **" };
	size_t n = 0;
	nonogram_row(s, &n);




}