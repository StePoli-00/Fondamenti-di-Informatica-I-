#include <math.h>
// 5.7543
double area_trapezio(double a, double b, double c, double d)
{
	double e = 0.5;
	double pt1 = e * (a + b);
	double pt2 = (b - a);
	double pc = pow(c,2);
	double pd = pow(d,2);
	double pt3 = 0;
	pt3 = (pc - pd) / pt2;
	double ris1 = pt3 + pt2;
	double ris2 = pow(ris1,2);
	double ris3 = ris2 * 0.25;
	double ris4 = 0;
	
		ris4 = pc - ris3;
	double area = pt1 * (sqrt(ris4));
	return area;

}