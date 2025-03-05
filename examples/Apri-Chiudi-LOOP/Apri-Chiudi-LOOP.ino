#include <SixDOF.h>

// Creiamo l'oggetto in modo globale
SixDOF braccioRobotico(3, 5, 6, 9, 10, 11);

void setup() {
    braccioRobotico.apri_pinza();  // Muove la pinza a 45°
    delay(2000);
    braccioRobotico.chiudi_pinza(); // Muove la pinza a 100°
}

void loop() {
    braccioRobotico.apri_pinza();  
    delay(1000);
    braccioRobotico.chiudi_pinza();
    delay(1000);
}
