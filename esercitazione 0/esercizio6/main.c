unsigned int fattoriale(unsigned int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fattoriale(n - 1);
}
int main(void)
{
	unsigned int n = 5;

	unsigned int ris = fattoriale(n); 

	return 0; 
}