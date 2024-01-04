#include "finance.h"

struct value* read_historical_series(const char* filename, size_t* n) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	struct value* res = NULL;
	char intestazione[128];
	int nread = fscanf(f, "%[^\n]", intestazione);
	if (nread != 1) {
		return NULL;
	}

	char Date_tmp[11];
	double Open_tmp, High_tmp, Low_tmp, Close_tmp, AdjClose_tmp;
	long long Volume_tmp = 0;
	size_t structs = 0;
	
	while ((fscanf(f, "%10s,%lf,%lf,%lf,%lf,%lf,%lld", Date_tmp, &Open_tmp, &High_tmp, &Low_tmp, &Close_tmp, &AdjClose_tmp, &Volume_tmp)) == 7){
		++structs;
		res = realloc(res, structs * sizeof(struct value));
		strcpy(res[structs - 1].Date, Date_tmp);
		res[structs - 1].Open = Open_tmp;
		res[structs - 1].High = High_tmp;
		res[structs - 1].Low = Low_tmp;
		res[structs - 1].Close = Close_tmp;
		res[structs - 1].AdjClose = AdjClose_tmp;
		res[structs - 1].Volume = Volume_tmp;
	}
	*n = structs;
	fclose(f);
	return res;
}