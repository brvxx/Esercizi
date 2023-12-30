#include <stdio.h>

int primo(unsigned int val)
{
	if (val == 0 || val == 1) {
		return 0;
	}
	if (val == 2) {
		return 1; 
	}
	if (val % 2 == 0) {
		return 0;
	}

	/*int i = 3;
	while (i < val) {
		if (val % i == 0) {
			return 0;
		}
		i += 2;
	}*/
	
	for (int i = 3; i < val; i += 2) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	unsigned int val = 692;

	int ris = primo(val);

	if (ris) {
		printf("%d e primo", val);
	}
	else {
		printf("%d non e primo", val);
	}

	return 0;
}