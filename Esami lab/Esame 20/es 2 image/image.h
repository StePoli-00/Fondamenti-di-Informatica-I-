#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
struct image {
	size_t rows, cols;
	uint8_t *data;
};
extern struct image *image_doublesize(const struct image *img);
