#include "punti_in_cerchio.h"

struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count) {
	if (p == NULL || n == 0 || r < 0) {
		*count = 0; 
		return NULL;
	}
	size_t struct_idx = 0; 
	size_t i = 0; 
	struct punto* res = NULL;
	while (i < n) {
		if (((p[i].x) * (p[i].x) + (p[i].y) * (p[i].y)) <= r * r) {
			struct_idx += 1; 
			res = realloc(res, struct_idx * sizeof(struct punto));
			res[struct_idx - 1].x = p[i].x;
			res[struct_idx - 1].y = p[i].y;
		}
		++i;
	}
	*count = struct_idx;
	return res; 
}