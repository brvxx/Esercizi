int ismultiple(int a, int b)
{
	//se il resto vale 0 allora ritorno 1, avrei potuto fare direttamente return a % b == 0 
	if (a % b == 0) {
		return 1;
	}
	return 0;
}

int main(void)
{
	int x;

	x = ismultiple(12, 3);
	x = ismultiple(3, 12);
	x = ismultiple(3, 3);
	x = ismultiple(-3, 3);
	x = ismultiple(12, -3);

	return 0;
}