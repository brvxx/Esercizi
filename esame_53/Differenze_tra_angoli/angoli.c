#include "angoli.h"

struct angolo differenza_angoli(struct angolo a, struct angolo b) {

	struct angolo res = { 0xFFFF, 0xFF, 0xFF };

	if (a.gradi >= b.gradi) {
		if (a.secondi >= b.secondi) {
			if (a.primi >= b.primi) {
				res.gradi = a.gradi - b.gradi;
				res.primi = a.primi - b.primi;
				res.secondi = a.secondi - b.secondi;
				return res;
			}
			else {
				--a.gradi;
				if (a.gradi < b.gradi) {
					return res;
				}
				a.primi += 60;
				res.primi = a.primi - b.primi;
				res.gradi = a.gradi - b.gradi;
				res.secondi = a.secondi - b.secondi;
				return res;
			}
		}
		else {
			if (a.primi > b.primi) {
				--a.primi; 
				a.secondi += 60; 
				res.secondi = a.secondi - b.secondi;
				res.primi = a.primi - b.primi;
				res.gradi = a.gradi - b.gradi;
				return res;
			}
			else {
				--a.gradi; 
				if (a.gradi < b.gradi) {
					return res;
				}
				a.primi += 60;
				--a.primi; 
				a.secondi += 60;
				res.secondi = a.secondi - b.secondi;
				res.primi = a.primi - b.primi;
				res.gradi = a.gradi - b.gradi;
				return res;
			}
		}
	}
	return res;
}