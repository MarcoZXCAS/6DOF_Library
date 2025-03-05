#include <Sixdof.h>

SixDOF braccio(3, 5, 6, 9, 10, 11);

void setup() {
    braccio.apri_pinza();
    delay(1000);
    braccio.chiudi_pinza();
}

void loop(){
  
}
