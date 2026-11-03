#include "Alumno.h"

using namespace std;

Alumno::Alumno() {
    this->codigo = "0000";
    this->nombre = "sin nombre";
    this->proyecto = 0.0;
}

Alumno::Alumno(const string& codigo, const string& nombre, double proyecto) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->proyecto = proyecto;
}

Alumno::~Alumno() {
}

string Alumno::get_codigo() const {
    return codigo;
}

string Alumno::get_nombre() const {
    return nombre;
}

// Las dos llamadas son virtuales: cada subclase pone su nota y su minimo.
bool Alumno::aprobado() const {
    return nota_final() >= nota_aprobatoria();
}
