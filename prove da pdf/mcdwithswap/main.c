void swap(unsigned int *c, unsigned int *d) {
	unsigned int tmp = *c;
	*c = *d;
	*d = tmp;
}

unsigned int mcd(unsigned int x, unsigned int y) {
	if (x == 0 || y == 0) {
		return 0;
	}
	while (x != y) {
		if (y > x) {
			swap(&x, &y);
		}
		x -= y;
	} 
	return x;
}

int main(void) {

	unsigned int a = 15;
	unsigned int b = 27;

	int ris = mcd(a, b);


	return 0; 
}