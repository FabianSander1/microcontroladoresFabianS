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


void main(void) {}
