unsigned int fattoriale(unsigned int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}

	char i = (n - 1);
	while (i > 0) {
		n *= i;
		i -= 1;
	}
	return n;

}
int main(void)
{ 
	unsigned int n = 5;

	unsigned int ris = fattoriale(n);

	return 0;

}