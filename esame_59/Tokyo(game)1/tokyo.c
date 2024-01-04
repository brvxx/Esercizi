#include <stdlib.h>
#include <string.h>

static int priority[] = { 21, 66, 55, 44, 33, 22, 11, 65, 64, 63, 62, 61, 54, 53, 52, 51, 43, 42, 41, 32, 31 };

int tokyo_confronta(char a[2], char b[2]) {
	if (a == NULL || b == NULL) {
		return 0;
	}

	for (size_t i = 0; i < 2; ++i) {							
		if (a[i] < 1 || a[i] > 6 || b[i] < 1 || b[i] > 6) {
			return 0;
		}
	}
	
	int a_int = a[0] > a[1] ? a[0] * 10 + a[1] : a[0] + 10 * a[1];
	int b_int = b[0] > b[1] ? b[0] * 10 + b[1] : b[0] + 10 * b[1];

	int a_idx = -1;
	int b_idx = -1;
	
	for (int i = 0; i < sizeof(priority) / sizeof(int); ++i) {
		if (priority[i] == a_int) { a_idx = i; }
		if (priority[i] == b_int) { b_idx = i; }
	}

	if (a_idx < b_idx)  { return 1;  }
	if (a_idx > b_idx)  { return -1; }
	if (a_idx == b_idx) { return 0;  }
}