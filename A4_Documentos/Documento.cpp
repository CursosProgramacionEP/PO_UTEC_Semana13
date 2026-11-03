#include "Documento.h"

using namespace std;

Documento::Documento() {
    this->numero = "00000000";
    this->fecha_caducidad = "01/01/2000";
}

Documento::Documento(const string& numero, const string& fecha_caducidad) {
    this->numero = numero;
    this->fecha_caducidad = fecha_caducidad;
}

Documento::~Documento() {
}

string Documento::get_numero() const {
    return numero;
}

string Documento::get_fecha_caducidad() const {
    return fecha_caducidad;
}
