#pragma once
#include <stdio.h>
#include<stdint.h>
#include <stdlib.h>
#include <string.h>
struct stringa
{
	unsigned char length;
	char *s;

};
extern struct stringa *read_stringhe_bin(const char *filename, unsigned int *pn);