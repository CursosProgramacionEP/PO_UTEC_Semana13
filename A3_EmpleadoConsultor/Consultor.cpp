#include "Consultor.h"
#include <iostream>
#include <iomanip>

using namespace std;

Consultor::Consultor() {
    this->tiene_salario_fijo = false;
    this->salario_fijo = 0.0;
    this->especialidad = "general";
}

Consultor::Consultor(const string& codigo, const string& nombre,
                     double horas, double salario_por_hora,
                     const string& especialidad)
        : Empleado(codigo, nombre, horas, salario_por_hora) {
    this->tiene_salario_fijo = false;
    this->salario_fijo = 0.0;
    this->especialidad = especialidad;
}

Consultor::Consultor(const string& codigo, const string& nombre,
                     double horas, double salario_por_hora,
                     const string& especialidad, double salario_fijo)
        : Empleado(codigo, nombre, horas, salario_por_hora) {
    this->tiene_salario_fijo = true;
    this->salario_fijo = salario_fijo;
    this->especialidad = especialidad;
}

bool Consultor::get_tiene_salario_fijo() const {
    return tiene_salario_fijo;
}

string Consultor::tipo() const {
    return "Consultor";
}

// Si tiene salario fijo cobra ese monto; si no, se calcula como el de cualquier empleado.
double Consultor::salario() const {
    if (tiene_salario_fijo) {
        return salario_fijo;
    }
    return Empleado::salario();
}

void Consultor::mostrar() const {
    Empleado::mostrar();
    cout << "          especialidad: " << especialidad
         << " | salario fijo: " << (tiene_salario_fijo ? "si" : "no") << endl;
}
