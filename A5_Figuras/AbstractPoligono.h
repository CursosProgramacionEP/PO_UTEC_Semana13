#ifndef ABSTRACTPOLIGONO_H
#define ABSTRACTPOLIGONO_H

#include "tipos.h"

// Interfaz: solo declara que toda figura sabe calcular su area y dibujarse.
class AbstractPoligono {
public:
    virtual ~AbstractPoligono() {};
    virtual Number calcularArea() = 0;
    virtual void dibujar() const = 0;
};

#endif
