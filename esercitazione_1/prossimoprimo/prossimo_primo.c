int primo(unsigned int val) {

	if (val == 0 || val == 1) {
		return 0;
	}

	if (val == 2) {
		return 1;
	}

	if (val % 2 == 0) {
		return 0;
	}

	for (unsigned int i = 3; i < val; i += 1) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}

unsigned int prossimo_primo(unsigned int x) {

	x++;
	while (1) {
		unsigned int successivo = primo(x);
		if (successivo == 1) {
			return x; 
		}
		x++;
	}

}

