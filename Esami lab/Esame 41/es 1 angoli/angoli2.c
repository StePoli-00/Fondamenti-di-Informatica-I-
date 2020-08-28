#include "angoli.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>


struct angolo somma_angoli(struct angolo a, struct angolo b)
{
	if(a.gradi == 0 && a.primi == 0 && a.secondi == 0)
	{
		return b;
	}
	if (b.gradi == 0 && b.primi == 0 && b.secondi == 0)
	{
		return a;
	}
	while (a.primi >= 60)
	{
		a.primi -= 60;
		a.gradi += 1;
	}
	while (a.secondi>= 60)
	{
		a.secondi -= 60;
		a.primi += 1;
	}
	while (a.primi >= 60)
	{
		a.primi -= 60;
		a.gradi+= 1;
	}
	while (b.primi >= 60)
	{
		b.primi -= 60;
		b.gradi += 1;
	}
	while (b.secondi >= 60)
	{
		b.secondi -= 60;
		b.primi+= 1;
	}
	while (b.primi >= 60)
	{
		b.primi -= 60;
		b.gradi += 1;
	}
	struct angolo s = { 0,0,0};
	s.primi = a.primi + b.primi;
	if (s.primi >= 60)
	{
		s.primi -= 60;
		s.gradi += 1;

	}
	s.secondi = a.secondi + b.secondi;
	if (s.secondi >= 60)
	{
		s.secondi -= 60;
		s.primi += 1;

	}
	if (s.primi >= 60)
	{
		s.primi -= 60;
		s.gradi+= 1;

	}
	s.gradi += (a.gradi + b.gradi);
	return s;

}