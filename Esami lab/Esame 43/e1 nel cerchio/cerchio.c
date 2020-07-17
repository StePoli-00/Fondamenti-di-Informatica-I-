#include"cerchio.h"
#include <math.h>
bool nel_cerchio(const struct punto *p, const struct cerchio *c)
{
	if (p == NULL || c == NULL)
	{
		return false;
	}
	struct punto *p1 = malloc(sizeof(struct punto));
	p1->x = p->x;
	p1->y = p->y;
	struct cerchio *c1 = malloc(sizeof(struct cerchio));
	c1->x = c->x;
	c1->y = c->y;
	c1->r = c->r;
	double dist = 0;
	double dx = c1->x - p1->x;
	dx = dx * dx;
	double dy = c1->y - p1->y;
	dy = dy * dy;
	dist = dx + dy;
	dist = sqrt(dist);
	if (dist <= c1->r)
	{
		free(c1);
		free(p1);
		return true;
	}
	else
	{
		free(c1);
		free(p1);
		return false;
	}


}
