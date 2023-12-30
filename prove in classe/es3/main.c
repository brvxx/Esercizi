char i;
unsigned int pot;
unsigned int ris;


char max_pot10(unsigned int val)
{
	/*
	if (val == 0) { return -1; }
	if (val < 10) { return 0; }
	if (val < 100) { return 1; }
	if (val < 1000) { return 2; }
	if (val < 10000) { return 3; }
	if (val < 100000) { return 4; }
	if (val < 1000000) { return 5; }
	if (val < 10000000) { return 5; }
	if (val < 100000000) { return 6; }
	if (val < 1000000000) { return 7; }
	if (val < 10000000000) { return 8; }*/

	/*if (val == 0) {
		return -1;
	}


	i = 0;
	pot = 10;
	while (pot < val) {
		pot = pot * 10;
			i = i + 1;
	}
	return i
*/
	i = -1
		while (val > 0) {
			val = val / 10;
			i = i + 1;

		}

	return i; 
}

int main(void)
{
	char ris;

	ris = max_pot10(123);
	ris = max_pot10(12);
	ris = max_pot10(3);
	ris = max_pot10(1);

	return 0;

}