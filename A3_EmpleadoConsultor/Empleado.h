#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string codigo;
    std::string nombre;
    double horas;              // horas trabajadas en el mes
    double salario_por_hora;

public:
    Empleado();
    Empleado(const std::string& codigo, const std::string& nombre,
             double horas, double salario_por_hora);
    virtual ~Empleado();

    std::string get_codigo() const;
    std::string get_nombre() const;

    virtual std::string tipo() const;
    virtual double salario() const;
    virtual void mostrar() const;
};

#endif
