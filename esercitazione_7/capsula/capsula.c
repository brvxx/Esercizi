//#include <stdio.h>
//#include <stdlib.h>
//
//void capsula(FILE* f, unsigned char n) {
//
//	if (f == NULL) {
//		return;
//	}
//
//	unsigned char size = n;
//	
//	for (unsigned char i = 0; i < (2 * n); ++i) {
//		if (i < n) {
//			fprintf(f, " ");
//		}
//		else {
//			fprintf(f, "_");
//		}
//	}
//	fprintf(f, "\n");
//	
//	unsigned char sizetmp = n;
//
//	for (size_t j = 0; j < n; ++j) {
//		for (size_t l = 0; l < size ; ++l) {
//				if (l == size - 1) {
//					fprintf(f, "/");
//				}
//				else {
//					fprintf(f, " ");
//				}
//		}
//		--size;
//		for (size_t m = 0; m < sizetmp + 1; ++m){
//				if (m == sizetmp){
//					fprintf(f, "\\");
//				}
//				fprintf(f, " ");
//		}
//		sizetmp += 2;
//		fprintf(f, "\n");
//	}
//	for (size_t p = 0; p < n; ++p) {
//		for(size_t q = 0; )
//	}
//}