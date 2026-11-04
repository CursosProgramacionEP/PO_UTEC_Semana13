#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    double sph;          // salario por hora

public:
    Empleado(const std::string& nombre, double sph);
    virtual ~Empleado();

    std::string getNombre();

    // El empleado cobra por hora trabajada.
    virtual double salario(double horas);
};

#endif
