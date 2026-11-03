#ifndef ALUMNO_H
#define ALUMNO_H

#include "tipos.h"

class Alumno {
private:
    entero edad;

public:
    Alumno() {
        edad = 0;
    };

    Alumno(entero edad) {
        this->edad = edad;
    };

    entero getEdad() {
        return this->edad;
    };

    // Sobrecarga de operador: se le ensenia a += que hacer con dos alumnos.
    Alumno& operator+=(Alumno alu);
};

#endif
