#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct punto { double x,  y; };
struct cerchio { double x, y, r; };

extern bool nel_cerchio(const struct punto *p, const struct cerchio *c);