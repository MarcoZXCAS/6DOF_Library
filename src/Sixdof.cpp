#include "SixDOF.h"

SixDOF::SixDOF(int Base, int Spalla, int Gomito, int Polso_1, int Polso_2, int Pinza) {
    _pin[0] = Base;
    _pin[1] = Spalla;
    _pin[2] = Gomito;
    _pin[3] = Polso_1;
    _pin[4] = Polso_2;
    _pin[5] = Pinza;

    for (int i = 0; i < NUM_SERVI; i++) {
        _servi[i].attach(_pin[i]);
    }
}

void SixDOF::apri_pinza() {
    _servi[5].write(PINZA_APERTA);
}

void SixDOF::chiudi_pinza() {
    _servi[5].write(PINZA_CHIUSA);
}

void SixDOF::reset_all() {
    for (int i = 0; i < (NUM_SERVI - 1); i++) {
        _servi[i].write(POS_DEFAULT);
        }
    chiudi_pinza();
}

void SixDOF::muovi_servo(int indice, int angolo) {
    if (indice >= 0 && indice < NUM_SERVI && angolo >= 0 && angolo <= 180) {
        _servi[indice].write(angolo);
        return;
    }

    if (indice < 0 || indice >= NUM_SERVI) {
        Serial.println("Errore: Indice servo non valido");
    }

    if (angolo < 0 || angolo > 180) {
        Serial.println("Errore: Angolo servo non valido");
    }
}

