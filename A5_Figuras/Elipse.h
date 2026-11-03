#ifndef ELIPSE_H
#define ELIPSE_H

#include "Poligono.h"

class Elipse : public Poligono {
    Number ejeMayor;
    Number ejeMenor;

public:
    Elipse(Number ejeMayor, Number ejeMenor);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif
