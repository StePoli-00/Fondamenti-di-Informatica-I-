#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct image{
	char name[255];
	size_t height, width;

};
extern struct image *read_images(const char *filename, size_t *n);