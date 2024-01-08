#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv) {

	int strings = argc; 

	for (int i = 1; i < strings; ++i) {
		for (size_t word_idx = 0; (argv[i])[word_idx] != 0; ++word_idx) {
			if ((argv[i])[word_idx + 1] == 0) {
				fputc(toupper((argv[i])[word_idx]), stdout);
				if (i != strings - 1) {
					fputc(' ', stdout);
				}
			}
			else {
				fputc((argv[i])[word_idx], stdout);
			}
		}	
	}
	fputc('\n', stdout);

	return 0;
}