#include "audio.h"


int audio_read(const char* filename, struct audio* a) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	size_t hcamp = 0;
	short tmp = 0;
	for (size_t i = 0;; ++i) {
		if (fread(&tmp, sizeof(short), 1, f) != 1){
			break;
		}
		++hcamp;
	}
	if (hcamp % 2 != 0) {
		fclose(f);
		return 0;
	}
	a->samples = hcamp / 2;

	
	a->left = malloc((hcamp / 2) * sizeof(short));
	a->right = malloc((hcamp / 2) * sizeof(short));

	fseek(f, 0, SEEK_SET);
			

	for (size_t k = 0; k < hcamp/2; ++k) {

		size_t nread = 0;
		nread += fread(&(a->left[k]), sizeof(short), 1, f); // al posto di usare l'& potevi usare a->left + k (vedi su foto xke)
		nread += fread(&(a->right[k]), sizeof(short), 1, f);

		if (nread != 2) {
			free(a->left);
			free(a->right);
			a->samples = 0;   //*a = (struct audio){0, NULL, NULL}; --> crea una struct temporanea i quali valori mette poi nella struct
			a->left = NULL;	// iniziale
			a->right = NULL;
			fclose(f);
			return 0;
		}
	}
	fclose(f);
	return 1;
}