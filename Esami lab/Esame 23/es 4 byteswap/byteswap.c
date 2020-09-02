#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t byteswap(uint32_t n)
{
	if (n == 0)
	{
		return 0;
	}
	unsigned int val= (n << 24); //sposta quarto byte
	val += (n << 8) & 0x00ff0000; //sposta terzo byte
	val += (n >> 8) & 0x0000ff00; //sposta secondo byte
	val += (n >> 24) & 0x000000ff; //sposta primo byte

	return val;

}