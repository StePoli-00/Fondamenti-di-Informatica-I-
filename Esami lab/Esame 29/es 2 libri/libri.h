#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct libro {
	char *titolo;
	uint16_t *anni_ristampe;
};
extern bool libro_scrivi(const struct libro *p, FILE *f);
