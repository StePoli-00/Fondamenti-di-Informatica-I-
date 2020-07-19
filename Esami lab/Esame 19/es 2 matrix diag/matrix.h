#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"
struct matrix
{
	size_t rows, cols;
	double *data;
};
extern struct matrix  *mat_creatediag(const double *values, size_t n);
