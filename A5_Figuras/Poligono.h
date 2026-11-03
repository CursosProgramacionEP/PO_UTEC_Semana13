#ifndef POLIGONO_H
#define POLIGONO_H

#include "AbstractPoligono.h"

class Poligono : public AbstractPoligono {
public:
    Poligono() {};
    Number calcularArea() override;
    void dibujar() const override;
};

#endif
