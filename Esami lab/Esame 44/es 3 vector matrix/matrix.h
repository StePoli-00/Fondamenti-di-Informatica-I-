#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct matrix {
	size_t rows, cols;
	double *data;
};
struct vector {
	size_t n;
	double *data;
};
enum vectorize_by { BY_ROW, BY_COLUMN };
extern struct vector *mat_vectorize(const struct matrix *m, enum vectorize_by dir);