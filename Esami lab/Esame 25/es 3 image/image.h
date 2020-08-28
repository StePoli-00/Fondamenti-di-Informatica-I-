	#pragma once
	#include <stdint.h>
	struct image
	{
		size_t rows, cols;
		uint8_t *data;
	};
	extern struct image *aggiungi_cornice(const struct image *img);
