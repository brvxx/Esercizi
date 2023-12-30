char max_pot10(unsigned int val)
{
	char i = -1;
	while (val > 0) {
		val = val / 10; 
		i += 1;
		}
	return i;
}

int main(void)
{
	unsigned int val = 4501;

	char ris = max_pot10(val);
	 
	return 0;
}