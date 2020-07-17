#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct matrix {
	size_t rows, cols;
	double *data;
};
extern bool scalar_mult(struct matrix *dst, const struct matrix *src, double k, bool accumulate);
