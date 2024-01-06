#include "frequenza.h"

struct oggetto* piu_frequente(const struct carta* c) {

	size_t freq = 0; 
	size_t freq_tmp = 0; 
	size_t freq_max_idx = 0;
	
	for (size_t carta_idx = 0; carta_idx < c->n; ++carta_idx) {
		for (size_t i = 0; i < c->n - 1; ++i) {
			if (carta_idx == i) {
				continue;
			}
			else {
				if ((strcmp((c->disegni[carta_idx]).colorenumero, (c->disegni[i]).colorenumero) == 0) &&
					(strcmp((c->disegni[carta_idx]).forma, (c->disegni[i]).forma)) == 0) {
					++freq;
				}
			}
		}
		if (freq > freq_tmp) {
			freq_max_idx = carta_idx;
		    freq_tmp = freq;
		}
		freq = 0;
	}
	struct oggetto* res = calloc(1, sizeof(struct oggetto));
	
	size_t colorenumero_len = strlen((c->disegni[freq_max_idx]).colorenumero);
	size_t forma_len = strlen((c->disegni[freq_max_idx]).forma);
	
	res->colorenumero = calloc(colorenumero_len + 1, sizeof(char));
	res->forma = calloc(forma_len + 1, sizeof(char));
	
	strcpy(res->colorenumero, (c->disegni[freq_max_idx]).colorenumero);
	strcpy(res->forma, (c->disegni[freq_max_idx]).forma);
	
	return res;
}