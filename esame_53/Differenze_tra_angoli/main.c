#include "angoli.h"

int main(void) {
	
	struct angolo a = { 10, 10, 10 };
	struct angolo b = { 10, 11, 9 };

	struct angolo res = differenza_angoli(a, b);

	printf("%u, %u, %u", res.gradi, res.primi, res.secondi);

	return 0;
}