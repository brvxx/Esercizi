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

	for (char i = 3; i < val; i += 1) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}
