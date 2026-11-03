#ifndef PARALELOGRAMO_H
#define PARALELOGRAMO_H

#include "Poligono.h"

class Paralelogramo : public Poligono {
    Number base;
    Number altura;

public:
    Paralelogramo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif
