#include "orari.h"

struct orario differenza_orari(struct orario a, struct orario b) {

	struct orario res = { 0xFF, 0xFF, 0xFF };
	
	if (a.ore >= b.ore) {
		if (a.secondi >= b.secondi) {
			res.secondi = a.secondi - b.secondi;
			if (a.minuti >= b.minuti) {
				res.ore = a.ore - b.ore;
				res.minuti = a.minuti - b.minuti;
				return res;
			}
			else {
				--a.ore;
				if (a.ore < b.ore) {
					return res;
				}
				a.minuti += 60;
				res.minuti = a.minuti - b.minuti;
				res.ore = a.ore - b.ore;
				return res;
			}
		}
		else {
			if (a.minuti > b.minuti) {
				--a.minuti;
				a.secondi += 60; 
				res.secondi = a.secondi - b.secondi;
				res.minuti = a.minuti - b.minuti;
				res.ore = a.ore - b.ore;
				return res;
			}
			else {
				--a.ore;
				if (a.ore < b.ore) {
					return res;
				}
				a.minuti += 60; 
				--a.minuti;
				a.secondi += 60;
				res.secondi = a.secondi - b.secondi;
				res.minuti = a.minuti - b.minuti; 
				res.ore = a.ore - b.ore;
				return res;
			}
		}
	}
	return res;
}