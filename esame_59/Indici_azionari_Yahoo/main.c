#include "finance.h"

int main(void) {

	size_t count = 0; 
	
	struct value* res = read_historical_series("BTC-EUR.csv", &count);
	
	fputs("Date,Open,High,Low,Close,Adj Close,Volume\n", stdout);
	for (size_t i = 0; i < count; ++i) {
		printf("%s, %f, %f, %f, %f, %f, %lld\n", res[i].Date, res[i].Open, res[i].High, res[i].Low, res[i].Close, res[i].AdjClose, res[i].Volume);
	}
	
	return 0;
}