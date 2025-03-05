#ifndef SIXDOF_H
#define SIXDOF_H

#include "Arduino.h"
#include <Servo.h>

#define NUM_SERVI 6

class SixDOF {
public:
    SixDOF(int Base, int Spalla, int Gomito, int Polso_1, int Polso_2, int Pinza);
    
    void chiudi_pinza();  // Chiude la pinza (imposta un angolo specifico)
    void apri_pinza();    // Apre la pinza (imposta un altro angolo)

private:
    Servo _servi[NUM_SERVI]; // Array di 6 oggetti Servo
    int _pin[NUM_SERVI];     // Pin collegati ai servi
};

#endif
