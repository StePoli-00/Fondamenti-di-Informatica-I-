#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
struct matrix
{
	size_t rows, cols;
	double *data;

};

extern struct matrix *matrix_flip_h(const struct matrix *m);