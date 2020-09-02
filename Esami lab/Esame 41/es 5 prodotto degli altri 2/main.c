#include "f.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
extern int prodotto_altri_due(const int *v, size_t n);
int main(void)
{
	int v[] = { 1, 12, 2, 3, 4, 5, 6 };
	size_t n = 7;
	prodotto_altri_due(v, n);



}
