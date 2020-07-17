#pragma once
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "matrix.h"
struct matrix
{
	size_t rows, cols;
	double *data;
};
extern struct matrix *mat_rendiquadrata(const struct matrix *a);
