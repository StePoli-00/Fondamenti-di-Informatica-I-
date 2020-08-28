#include <stdint.h>
extern void print_table(char **colnames, uint8_t ncols, uint8_t nrows);
int main(void)
{
	char *c[]= { "cat","dog","deer","frog","rabbit"};
	uint8_t col = 5;
	uint8_t ro = 2;
	print_table(c, col, ro);



}