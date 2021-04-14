#pragma once
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct scacchiera {
	char caselle[64];
};
extern void stampa_scacchiera(const struct scacchiera *sc);
