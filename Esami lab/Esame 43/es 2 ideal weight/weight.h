#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
enum formula { lorenz, berthean, keys };
extern double ideal_weight(int h, int age, char sex, enum formula f);
