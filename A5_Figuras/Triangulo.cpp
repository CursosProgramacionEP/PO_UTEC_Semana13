#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo(Number base, Number altura) {
    this->base = base;
    this->altura = altura;
}

Number Triangulo::calcularArea() {
    return base * altura / 2;
}

void Triangulo::dibujar() const {
    std::cout << "dibujar triangulo\n";
}
