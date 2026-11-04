#include "Empleado.h"

using namespace std;

Empleado::Empleado() {
    this->nombre = "sin nombre";
    this->sph = 0.0;
}

Empleado::Empleado(const string& nombre, double sph) {
    this->nombre = nombre;
    this->sph = sph;
}

Empleado::~Empleado() {
}

string Empleado::getNombre() {
    return nombre;
}

double Empleado::salario(double horas) {
    return sph * horas;
}
