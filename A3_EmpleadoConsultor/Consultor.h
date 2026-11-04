#ifndef CONSULTOR_H
#define CONSULTOR_H

#include <string>
#include "Empleado.h"

class Consultor : public Empleado {   // "un consultor ES UN empleado"
private:
    bool es_pagado;      // indica si tiene salario fijo
    double fijo;

public:
    Consultor();
    Consultor(const std::string& nombre, double sph);
    Consultor(const std::string& nombre, double sph, double fijo);

    bool getEsPagado();

    // Cambia la condicion de pago del consultor.
    void cambiar(bool es_pagado, double fijo);

    double salario(double horas) override;
};

#endif
