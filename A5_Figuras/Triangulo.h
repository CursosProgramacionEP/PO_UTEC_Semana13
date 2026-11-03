#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Poligono.h"

class Triangulo : public Poligono {
    Number base;
    Number altura;

public:
    Triangulo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif
