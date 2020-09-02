#pragma once
#include <stdint.h>
#include <stdlib.h>
struct fraz{
int num; 
unsigned int den;
};
extern void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b);
		