#include "Simple.h"

Simple::Simple() : Estrella(0.0, false) {
}

Simple::Simple(double radio) : Estrella(radio, false) {
}

bool Simple::getFlag() {
    return esBinaria;
}

double Simple::getRadio() {
    return radio;
}
