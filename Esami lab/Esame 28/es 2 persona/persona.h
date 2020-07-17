#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct persona
{
	char *nome;
	uint16_t eta;
	char sesso;
};
extern bool persona_scrivi(const struct persona *p, FILE *f);