#include "Elipse.h"
#include <iostream>

const double PI = 3.1416;

Elipse::Elipse(Number ejeMayor, Number ejeMenor) {
    this->ejeMayor = ejeMayor;
    this->ejeMenor = ejeMenor;
}

// El area usa los semiejes: la mitad de cada eje.
Number Elipse::calcularArea() {
    return PI * (ejeMayor / 2) * (ejeMenor / 2);
}

void Elipse::dibujar() const {
    std::cout << "draw elipse\n";
}
