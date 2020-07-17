#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct matrix { size_t rows, cols;
double *data;
};
extern struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b);
