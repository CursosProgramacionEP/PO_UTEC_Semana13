#include "Estrella.h"

Estrella::Estrella() {
    this->radio = 0.0;
    this->esBinaria = false;
}

Estrella::Estrella(double radio, bool esBinaria) {
    this->radio = radio;
    this->esBinaria = esBinaria;
}

Estrella::~Estrella() {
}
