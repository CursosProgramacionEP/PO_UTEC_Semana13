#include "Binaria.h"

// Simple no tiene constructor por defecto, asi que las dos componentes
// se construyen obligatoriamente en la lista de inicializadores.
Binaria::Binaria(double radio1, double radio2)
        : Estrella(0.0, true), primera(radio1), segunda(radio2) {
}

bool Binaria::getFlag() {
    return esBinaria;
}

double Binaria::getRadio1() {
    return primera.getRadio();
}

double Binaria::getRadio2() {
    return segunda.getRadio();
}
