#pragma once
#include <stdint.h>
#include <stdlib.h>
struct immagine {
	size_t w, h;

};
struct punto {
	size_t x, y;
};
extern int scala_punto(struct punto *p, const struct immagine  *img,
	const struct immagine *img_new);
