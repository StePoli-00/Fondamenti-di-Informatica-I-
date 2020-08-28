#pragma once
#include <stdint.h>
struct matrix {
	size_t rows, cols;
	double *data;
};
extern double *bordo_esterno(const struct matrix *m, size_t *new_size);
