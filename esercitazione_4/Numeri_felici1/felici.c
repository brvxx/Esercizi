unsigned int sumpow(unsigned int x) {
	unsigned int sum = 0;
	while (x > 0) {
		sum += (x % 10) * (x % 10);
		x /= 10; 
	}
	return sum;
}

int felice(unsigned int num) {

	if (num == 0) {
		return 0; 
	}
	
	unsigned int res = num;
	while (1) {
		res = sumpow(res);
		if (res == 1) {
		return 1;
		}
		if (res == 4) {
		return 0;
		}
	}
}