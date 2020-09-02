#pragma once
#include <stdint.h>
#include <stdlib.h>
struct matrix {
	size_t M, N;
	double *data;
};
extern struct matrix *mat_sommadiretta(const struct matrix *a, const struct matrix *b);
		