#include "SixDOF.h"

SixDOF braccio(3, 5, 6, 9, 10, 11); // Pin collegati ai servomotori

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Muovo il servo Gomito (indice 2) a 120°...");
    braccio.muovi_servo(2, 120);
    delay(2000); 

    Serial.println("Muovo il servo Polso_2 (indice 4) a 45°...");
    braccio.muovi_servo(4, 45);
    delay(2000); 
}
