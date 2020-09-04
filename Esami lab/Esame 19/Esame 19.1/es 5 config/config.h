#pragma once
#include <stdint.h>
#include <stdlib.h>
struct keyval
{
	char k[256];
	char v[256];
};
extern struct keyval *read_config(const char *filename, size_t *n);
