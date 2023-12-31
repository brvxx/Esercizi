#include "audio.h"

int main(void) {

	struct audio test = { 0, NULL, NULL };
	int res = audio_read("audio.raw", &test);
	printf("%s\n\n", res == 1 ? "il programma ha funzionato correttamente" : "qualcosa e' andato storto");
	
	printf("il numero di campioni e': %zu", test.samples);
	puts("i campioni del canale sinistro sono: ");
	for (size_t sx = 0; sx < test.samples; ++sx) {
		printf("%d ", test.left[sx]);
	}
	fputs("\n\n", stdout);
	
	puts("i campioni del canale destro sono: ");
	for (size_t dx = 0; dx < test.samples; ++dx) {
		printf("%d ", test.right[dx]);
	}
	fputs("\n\n", stdout);

	return 0; 
}