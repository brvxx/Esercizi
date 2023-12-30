#include "audio.h"

int main(void) {

	struct audio A = { 0, NULL, NULL };

	int res = audio_read("test.raw", &A);
	
	free(A.left);
	free(A.right);
	return 0;
}