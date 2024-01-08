#include "dataset.h"

struct dataset* dataset_load(const char* filename) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	struct dataset* res = calloc(1, sizeof(struct dataset));

	struct row* rows = NULL;
	char buf[256] = { 0 };
	char buf2[16] = { 0 };
	size_t row_idx = 0;

	while (fscanf(f, " %[^,],%s", buf, buf2) == 2) {
		++row_idx;
		rows = realloc(rows, row_idx * sizeof(struct row));
		if (strcmp(buf2, "MILD") == 0) {
			rows[row_idx - 1].prognosis = 'M';
		}
		else {
			rows[row_idx - 1].prognosis = 'S';
		}
		rows[row_idx - 1].filename = calloc(256, sizeof(char));
		strcpy(rows[row_idx - 1].filename, buf);
	}
	
	res->data = rows;
	res->nrows = row_idx;
	
	fclose(f);
	return res;
}