#pragma once
#include <stdint.h>
struct matrix
{
	size_t rows, cols;
	double *data;
};
extern struct matrix *mat_delete_col(const struct matrix *n, size_t i);