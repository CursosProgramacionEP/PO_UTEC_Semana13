#include "Paralelogramo.h"
#include <iostream>

Paralelogramo::Paralelogramo(Number base, Number altura) {
    this->base = base;
    this->altura = altura;
}

Number Paralelogramo::calcularArea() {
    return base * altura;
}

void Paralelogramo::dibujar() const {
    std::cout << "dibujar paralelogramo\n";
}
