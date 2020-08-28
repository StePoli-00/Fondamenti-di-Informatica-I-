#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

struct casella {
	int x, y;
	char lati[4];

};
typedef struct casella casella;
extern bool controlla_casella(const struct casella *c, const struct casella  *tabellone,
	size_t dim);