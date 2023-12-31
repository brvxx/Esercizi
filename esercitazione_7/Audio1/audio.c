#include "audio.h"

int audio_read(const char* filename, struct audio* a) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	
	size_t hcamp = 0;
	short tmp = 0; 
	while (fread(&tmp, sizeof(short), 1, f) == 1) {
		++hcamp;
	}

	a->samples = hcamp / 2;
	a->left = malloc(hcamp / 2 * sizeof(short));
	a->right = malloc(hcamp / 2 * sizeof(short));

	fseek(f, 0, SEEK_SET);

	size_t nread = 0;	//variabile di controllo del corretto funzionamento della fread
	for (size_t i = 0; i < hcamp / 2; ++i) {
		nread += fread(&(a->left[i]), sizeof(short), 1, f);
		nread += fread(&(a->right[i]), sizeof(short), 1, f);
		
		if (nread != 2) {
			free(a->left);
			free(a->right); 
			a->left = NULL;
			a->right = NULL;
			a->samples = 0;
			fclose(f); 
			return 0;
		}
		nread = 0;
	}
	fclose(f);
	return 1;
}

