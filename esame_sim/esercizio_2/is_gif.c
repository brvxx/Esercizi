#include "is_gif.h"

bool is_gif(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}
	char* gif = calloc(7, sizeof(char));
	
	if (fscanf(f, "%6s", gif) != 1) {
		free(gif);
		fclose(f);
		return false;
	}
	if (strcmp(gif, "GIF89a") != 0 && strcmp(gif, "GIF87a") != 0) {
		free(gif);
		fclose(f);
		return false;
	}
	free(gif);
	fclose(f);
	return true;

}