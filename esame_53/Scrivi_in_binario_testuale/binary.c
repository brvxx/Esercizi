#include "binary.h"

void stampa_binario(const char* filename_in, const char* filename_out) {
	FILE* f_in = fopen(filename_in, "rb");
	if (f_in == NULL) {
		return;
	}
	
	FILE* f_out = fopen(filename_out, "w");
	char num = 0;
	char tmp = 0;
	char buf[9] = "00000000";
	size_t num_idx = 7; 
	size_t fread_count = 0; 
	
	while (fread(&num, 1, 1, f_in) == 1) {
		++fread_count;
		tmp = abs(num);
		while (tmp > 0) {
			buf[num_idx] = tmp % 2 + '0';
			tmp /= 2;
			--num_idx;
		}
		if (num < 0) {
			size_t i = 7;
			while (buf[i] != '1') {
				--i;
			}
			for (size_t j = 0; j < i; ++j) {
				if (buf[j] == '0') {
					buf[j] = '1';
				}
				else {
					buf[j] = '0';
				}
			}
		}

		fprintf(f_out, "%s ", buf);
		if (fread_count % 8 == 0) {
			fputc('\n', f_out);
		}
		num_idx = 7;
		strcpy(buf, "00000000");
	}
	fclose(f_in);
	fclose(f_out);
}
