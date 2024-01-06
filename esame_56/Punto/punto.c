#include "punto.h"

struct punto_pol cartesiano2polare(const struct punto_cart* p) {

	double sumsqrt = sqrt((p->x) * (p->x) + (p->y) * (p->y));
	struct punto_pol res = { sumsqrt, atan2(p->y,p->x) };

	return res;
}

struct punto_cart polare2cartesiano(const struct punto_pol* p) {	

	struct punto_cart res = { p->r * cos(p->t), p->r * sin(p->t) };

	return res;
}