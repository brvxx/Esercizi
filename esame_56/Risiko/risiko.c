#include "risiko.h"

void confronta_lanci(const struct lancio* attacco, const struct lancio* difesa,
    char* perse_attacco, char* perse_difesa) {

    char dadi = 0;
    if (attacco->n_dadi <= difesa->n_dadi) {
        dadi = attacco->n_dadi;
    }
    else {
        dadi = difesa->n_dadi;
    }
    char lost_atk = 0;
    char lost_def = 0;
    for (int i = 0; i < (int)dadi; ++i) {
        if ((difesa->valori)[i] >= (attacco->valori)[i]) {
            ++lost_atk;
        }
        else {
            ++lost_def;
        }
    }
    *perse_attacco = lost_atk;
    *perse_difesa = lost_def;
}
