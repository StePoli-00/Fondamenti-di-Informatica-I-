//punto.h
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct punto {
	size_t x, y;
};

struct immagine {
	size_t w, h;
};

typedef struct punto punto;
typedef struct immagine immagine;			//per comodità typedeffiamo i nomi delle struct

extern int scala_punto(struct punto *p, const struct immagine *img, const struct immagine *img_new);

/********************************************************************************************************/

//punto.c
#include "punto.h"

int arrot(double div) {
	int in = (int)div;						//prendo la parte intera del nostro numero double (in)
	double resto = div - in;			//ottengo la parte dopo la virgola (resto)
	if (resto >= 0.5) {						//se questa è maggiore di 0.5 aumento *in* e lo restituisco
		++in;
		return in;
	}
	else {
		return in;
	}
}

int scala_punto(punto *p, const immagine *img, const immagine *img_new) {
	if (p == NULL || img == NULL || img_new == NULL || p->x > img->w || p->y > img->h) {
		return -1;
	}

	double s, z, o;							//le variabili double servono per il successivo arrotondamento

	s = img_new->w;
	z = img->w;
	o = p->x;													//giusto per non avere roba in mezzo ahahahahah passiamo al terzo arrivo
	double div = (o * (s / z));				//svolgiamo la divisione in double così otteniamo la parte dopo la virgola

	int num = arrot(div);					   //chiamo la funzione arrot che arrotonderà i valori all'intero più vicino
	p->x = num;								       //inizializzo la x con il valore intero arrotondato

	s = img_new->h;
	z = img->h;
	o = p->y;
	div = (o * (s / z));
	num = arrot(div);
	p->y = num;

	return 0;
}
