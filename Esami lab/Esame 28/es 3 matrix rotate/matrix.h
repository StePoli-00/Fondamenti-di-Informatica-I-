
#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct matrix
{
	size_t rows, cols;
	double *data;

};
extern struct matrix *rotate_v(const struct matrix *m, int n);