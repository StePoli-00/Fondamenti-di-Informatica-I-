#include <stdint.h>
#include <stdlib.h>
extern void print_table(char **colnames, uint8_t ncols, uint8_t nrows);
int main(void)
{
	char *s[]= { {"cat"},{"dog"},{"deer"},{"frog"} };
	print_table(s, 4, 2);


}