#include "config.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	char s[] = "config1.txt";
	size_t n = 0;
	struct keyval *key = read_config(s, &n);

}
