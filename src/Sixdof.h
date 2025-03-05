#ifndef SIXDOF_H
#define SIXDOF_H

#include "Arduino.h"
#include <Servo.h>

#define NUM_SERVI 6
#define PINZA_APERTA  45
#define PINZA_CHIUSA  100
#define POS_DEFAULT   90

class SixDOF {
public:
    SixDOF(int Base, int Spalla, int Gomito, int Polso_1, int Polso_2, int Pinza);
    
    void chiudi_pinza();  // Chiude la pinza
    void apri_pinza();    // Apre la pinza
    void reset_all();     // Imposta tutto a 90° (tranne la pinza)
    void muovi_servo(int indice, int angolo); // Muove un singolo servo a un angolo specifico

private:
    Servo _servi[NUM_SERVI]; // Array di oggetti Servo
    int _pin[NUM_SERVI];     // Pin collegati ai servomotori
};

#endif
