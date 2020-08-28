#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct rational {
	int num;
	unsigned int den;

};
extern void rational_mul(struct rational *product, const struct rational *multiplicand,
	const struct rational *multiplier);