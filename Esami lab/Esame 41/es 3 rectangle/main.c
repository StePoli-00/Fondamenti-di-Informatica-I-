#define _CRT_SECURE_NO_WARNINGS
#include "rectangle.h"
int main(void)
{
	struct point x = { 0,0 };
	struct point y= { 0,0 };
	struct rect a = { x,y };

	FILE *f = fopen("file1.bin", "rb");
	if (f != NULL)
	{
		rect_load(f, &a);
	}


}