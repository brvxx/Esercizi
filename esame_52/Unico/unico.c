#include "unico.h"

const struct oggetto* unico(const struct carta* c) {
	if (c == NULL) {
		return NULL;
	}
	
	
	size_t same_color = 0; 
	size_t same_form = 0; 
			
	for (size_t carta_i = 0 ; carta_i < c->n; ++carta_i) {
		for (size_t disegni_i = 0; disegni_i < c->n; ++disegni_i) {
			if (disegni_i == carta_i) {
				continue;
			}
			else {
				if (strcmp((c->disegni)[carta_i].forma, (c->disegni)[disegni_i].forma) == 0) {
					same_form += 1; 
					break;
				}
			}
		}

		for (size_t disegni_i = 0; disegni_i < c->n; ++disegni_i) {
			if (disegni_i == carta_i) {
				continue;
			}
			else {
				if (strcmp((c->disegni)[carta_i].colore, (c->disegni)[disegni_i].colore) == 0) {
					same_color += 1;
					break;
				}
			}
		}
		
		if ((same_color + same_form) <= 1) {
			return &(c->disegni[carta_i]);
		}
		
		same_form = 0; 
		same_color = 0; 
	}
	return NULL;
}