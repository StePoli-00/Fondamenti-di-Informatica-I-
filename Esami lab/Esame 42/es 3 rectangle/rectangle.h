#pragma once
#include <stdint.h>
#include <stdlib.h>
struct point
{
	int x, y;

};

struct rect
{
	struct point a, b;

};
extern int find_largest(const struct rect *r, size_t n);
