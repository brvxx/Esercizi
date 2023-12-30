#include <stdio.h>
#include <stdlib.h>

void ripeti(FILE* f, char c, unsigned char n) {
	for (int i = 0; i < n; ++i) {
		fputc(c, f);
	}
}

void capsula(FILE* f, unsigned char n) {
	if (n == 0) {
		return;
	}
	//prima parte
	ripeti(f, ' ', n);
	ripeti(f, '_', n);
	fputc('\n', f);

	//seconda parte
	for (unsigned char i = 0; i < n; ++i) {
		ripeti(f, ' ', n - 1 - i);
		fputc('/', f);
		ripeti(f, ' ', n + 2 * i);
		fputs("\\\n", f);
	}

	//terza parte
	for (unsigned char i = 0; i < n; ++i) {
		fputc('|', f);
		ripeti(f, ' ', n - 1 + n + n - 1);
		fputs("|\n", f);
	}

	//quarta parte 
	for (unsigned char i = 0; i < n - 1; ++i) {
		ripeti(f, ' ', i);
		fputc('\\', f);
		ripeti(f, ' ', (n - 1 - i) + n + (n - 1 - i));
		fputs("/\n", f);
	}

	//quinta parte
	ripeti(f, ' ', n - 1);
	fputc('\\', f);
	ripeti(f, '_', n);
	fputs("/\n", f);

}