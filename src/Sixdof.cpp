#include "SixDOF.h"

SixDOF::SixDOF(int Base, int Spalla, int Gomito, int Polso_1, int Polso_2, int Pinza) {
    _pin[0] = Base;
    _pin[1] = Spalla;
    _pin[2] = Gomito;
    _pin[3] = Polso_1;
    _pin[4] = Polso_2;
    _pin[5] = Pinza;

    for (int i = 0; i < NUM_SERVI; i++) {
        _servi[i].attach(_pin[i]);  // Collega i servi ai pin specificati
    }
}

void SixDOF::apri_pinza() {
    _servi[5].write(45);  // Muove il servo della pinza a 45°
}

void SixDOF::chiudi_pinza() {
    _servi[5].write(100); // Muove il servo della pinza a 100°
}
