#include "punto.h"
#include <math.h>
struct punto_pol cartesiano2polare(const struct punto_cart *p)
{
	struct punto_cart c;
	c.x = p->x;
	c.y = p->y;
	double r = sqrt((c.x*c.x) + (c.y*c.y));
	double t = atan2(c.y, c.x);
	struct punto_pol pol = { r,t };
	return pol;



}

struct punto_cart polare2cartesiano(const struct punto_pol *p)
{


	struct punto_pol pol;
	pol.r= p->r;
	pol.t = p->t;
	double x = pol.r*cos(p->t);
	double y = pol.r*sin(p->t);
	struct punto_cart c = { x,y };
	return c;
 }

