#include "imperial.h"

double to_meter(const char* imperial_length) {
	if (imperial_length == NULL) {
		return 0;
	}
	const char* str = imperial_length;
	char buf[256] = { 0 };
	double lenght = 0; 
	int cread = 0; 
	double tmp = 0;
	
	while (1) {
		if (sscanf(str, "%lf%n", &tmp, &cread) != 1) {
			break;
		}
		str += cread;
		
		if (sscanf(str, "%s%n", buf, &cread) != 1) {
			return 0;
		}
		str += cread;

		if (strcmp(buf, "inch") == 0 || strcmp(buf, "inches") == 0 || strcmp(buf, "in") == 0 || strcmp(buf, "in.") == 0 || strcmp(buf, "\"") == 0) {
			lenght += tmp * 0.0254;
		}
		else if (strcmp(buf, "foot") == 0 || strcmp(buf, "feet") == 0 || strcmp(buf, "ft") == 0 || strcmp(buf, "ft.") == 0 || strcmp(buf, "\'") == 0) {
			lenght += tmp * 0.0254 * 12;
		}
		else if (strcmp(buf, "yard") == 0 || strcmp(buf, "yards") == 0 || strcmp(buf, "yd") == 0 || strcmp(buf, "yd.") == 0) {
			lenght += tmp * 0.0254 * 12 * 3;
		}
		else if (strcmp(buf, "mile") == 0 || strcmp(buf, "miles") == 0 || strcmp(buf, "mi") == 0 || strcmp(buf, "mi.") == 0) {
			lenght += tmp * 0.0254 * 12 * 3 * 1760;
		}
		else {
			return 0;
		}
	}
	return lenght;
}