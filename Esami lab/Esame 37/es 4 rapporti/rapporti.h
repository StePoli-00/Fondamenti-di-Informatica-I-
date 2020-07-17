#pragma once
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct rapporto
{
	uint16_t id;
	char tipo;
	float valore;
};
extern struct rapporto *leggi_rapporti(const char *filename, uint16_t *n);