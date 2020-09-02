#include "database.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	char s[] = { "db3.bin" };
	struct database d;
	int n = db_load(s, &d);
}