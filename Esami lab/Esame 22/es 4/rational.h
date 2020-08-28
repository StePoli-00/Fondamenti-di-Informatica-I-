#pragma once 
#include <stdint.h>
#include <stdio.h>
struct rational 
{ int num; 
unsigned int den;
};
extern struct rational *rational_read(const char *filename, size_t *size);
