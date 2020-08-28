#include "f.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
extern int prodotto_altri_due(const int *v, size_t n);
int main(void)
{
	int v[4] = { 10, 2, 8, 4 };
	size_t n = 4;
	prodotto_altri_due(v, n);



}
