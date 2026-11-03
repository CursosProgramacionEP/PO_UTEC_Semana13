#ifndef CONSULTOR_H
#define CONSULTOR_H

#include <string>
#include "Empleado.h"

class Consultor : public Empleado {   // "un consultor ES UN empleado"
private:
    bool tiene_salario_fijo;
    double salario_fijo;
    std::string especialidad;

public:
    Consultor();

    // Consultor sin salario fijo: cobra por hora, como cualquier empleado.
    Consultor(const std::string& codigo, const std::string& nombre,
              double horas, double salario_por_hora,
              const std::string& especialidad);

    // Consultor con salario fijo: cobra el monto pactado.
    Consultor(const std::string& codigo, const std::string& nombre,
              double horas, double salario_por_hora,
              const std::string& especialidad, double salario_fijo);

    bool get_tiene_salario_fijo() const;

    std::string tipo() const override;
    double salario() const override;
    void mostrar() const override;
};

#endif
