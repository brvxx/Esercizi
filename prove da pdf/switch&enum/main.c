enum oper { add, sub, prod, div }; 

double op(enum oper x, double n1, double n2) {

	double risultato; 

	switch (x) {
	case add: risultato = n1 + n2;
		break;
	case sub: risultato = n1 - n2;
		break; 
	case prod: risultato = n1 * n2; 
		break;
	case div: risultato = n1 / n2;
		break; 
	default: risultato = 0;
		break;
	}
	return risultato; 

}

int main(void) { 
	
	double ris = op (2 , 34.3, 76.6); 

	return 0; 

}