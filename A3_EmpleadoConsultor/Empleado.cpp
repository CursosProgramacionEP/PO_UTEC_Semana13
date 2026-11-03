#include "Empleado.h"
#include <iostream>
#include <iomanip>

using namespace std;

Empleado::Empleado() {
    this->codigo = "0000";
    this->nombre = "sin nombre";
    this->horas = 0.0;
    this->salario_por_hora = 0.0;
}

Empleado::Empleado(const string& codigo, const string& nombre,
                   double horas, double salario_por_hora) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->horas = horas;
    this->salario_por_hora = salario_por_hora;
}

Empleado::~Empleado() {
}

string Empleado::get_codigo() const {
    return codigo;
}

string Empleado::get_nombre() const {
    return nombre;
}

string Empleado::tipo() const {
    return "Empleado";
}

// El empleado cobra siempre por hora trabajada.
double Empleado::salario() const {
    return horas * salario_por_hora;
}

void Empleado::mostrar() const {
    cout << fixed << setprecision(2)
         << left << setw(10) << tipo()
         << setw(8) << codigo
         << setw(20) << nombre
         << right << setw(8) << horas << " h"
         << setw(10) << salario_por_hora << " /h"
         << setw(12) << salario() << endl;
}
