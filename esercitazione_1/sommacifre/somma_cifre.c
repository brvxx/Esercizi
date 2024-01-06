unsigned int somma_cifre(unsigned int x) {
	
	unsigned int somma = 0;
	while (x > 0) {              //sto sostanzialmente effettuando un cambio di base 2 --> 10 
		somma += x % 10;         //io sommando i vari resti ottengo la somma delle cifre della
		x /= 10;				 // rappresentazione in base 10 
	}
	return somma; 
}