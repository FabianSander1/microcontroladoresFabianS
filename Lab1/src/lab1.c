#include <pic14/pic12f683.h>
#include <stdint.h>

volatile uint8_t numeroActual = 1; 

uint8_t contadorRapido(void) {
    numeroActual++; 
    if (numeroActual > 6) {
        numeroActual = 1;
    }
    return numeroActual;
}

void delay(unsigned int intervaloTiempo) {
    unsigned int contadorExterno, contadorInterno;
    for (contadorExterno = 0; contadorExterno < intervaloTiempo; contadorExterno++)
        for (contadorInterno = 0; contadorInterno < 1275; contadorInterno++);


void main(void) {
    TRISIO = 
    GPIO = 
    
    unsigned int tiempoEspera = 
    unsigned int numeroAleatorio = 
    while (1) {
        if (GP5) { 
            numeroAleatorio = contadorRapido();

            switch (numeroAleatorio) {
                case 1:
                    break;
                
                case 2:
                    break;
                
                case 3:
                    break;
                
                case 4:
                    break;
                
                case 5:
                    break;
                
                case 6:

                    break;
            }
        } else {

        }
    }
}
