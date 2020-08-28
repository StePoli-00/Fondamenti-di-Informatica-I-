#pragma once 
#include <stdint.h>
struct matrix
{
	size_t M, N;
	double *data;
};
extern struct matrix *mat_replica(const struct matrix *a, int dir);