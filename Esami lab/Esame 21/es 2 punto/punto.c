#include "punto.h"
int scala_punto(struct punto *p, const struct immagine  *img,const struct immagine *img_new)
{
	if(p==NULL || img==NULL || img_new==NULL)
	{
		return -1;
	}
	struct immagine *old_img = malloc(sizeof(struct immagine));
	old_img->w= img->w;
	old_img->h = img->h;
	double ox = img->w;
	double oy = img->h;
	double nx = img_new->w;
	double ny = img_new->h;

	if (p->x > old_img->w || p->y>old_img->h)
	{
		free(old_img);
		return -1;

	}
	double xp = p->x;
	double yp = p->y;
	double x_new = (xp*((nx/ox)))+0.5;
	p->x = x_new;
	double y_new = (yp*((ny/oy))) + 0.5;
	p->y = y_new;
	free(old_img);
	.return 0;

}