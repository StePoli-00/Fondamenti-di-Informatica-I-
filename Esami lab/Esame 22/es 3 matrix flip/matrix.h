#pragma once 
#include <stdint.h>
struct matrix {
	size_t rows, cols;
	double *data;
};
extern struct matrix *matrix_flip_v(const struct matrix *m);