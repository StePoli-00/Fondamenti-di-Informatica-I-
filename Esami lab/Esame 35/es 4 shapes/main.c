#define _CRT_SECURE_NO_WARNINGS
#include "shapes.h"
#include <stdio.h>


int main(void)
{
	FILE *f = fopen("rect1.bin", "rb");

	struct rect r;
bool b=rect_load(f, &r);




}