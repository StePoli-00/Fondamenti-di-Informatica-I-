#define  _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

struct nonogram
{
	size_t n;
	char *schema;
};
extern bool nonogram_load(struct nonogram *ng, const char *filename);