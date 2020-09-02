#pragma once
#include <stdint.h>
#include <stdlib.h>
struct record
{
	uint32_t size;
	uint8_t *data;
};
struct database
{
	uint32_t num;
	struct  record *recs;
};
extern int db_load(const char *filename, struct database *db);