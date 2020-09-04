#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
struct seq {
	size_t len;
	uint16_t *values;
};
extern bool seq_load(const char *filename, struct seq *s);