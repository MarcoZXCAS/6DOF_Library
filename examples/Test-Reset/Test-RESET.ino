#include "SixDOF.h"

SixDOF braccio(3, 5, 6, 9, 10, 11); // Pin collegati ai servomotori

void setup() {
    Serial.begin(9600);
    Serial.println("Reset iniziale del braccio...");
    braccio.reset_all();
    delay(2000);
}

void loop() {
    Serial.println("Muovo casualmente il braccio...");
    braccio.muovi_servo(1, 150);  // Spalla a 150°
    delay(2000);
    
    braccio.muovi_servo(3, 30);  // Polso_1 a 30°
    delay(2000);
    
    Serial.println("Resetto tutto alla posizione iniziale...");
    braccio.reset_all();
    delay(5000);
}
