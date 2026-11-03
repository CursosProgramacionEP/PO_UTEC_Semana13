#include "Brevete.h"
#include <iostream>

using namespace std;

Brevete::Brevete() {
    this->categoria = "A-I";
}

Brevete::Brevete(const string& numero, const string& fecha_caducidad,
                 const string& categoria)
        : Documento(numero, fecha_caducidad) {
    this->categoria = categoria;
}

string Brevete::tipo() const {
    return "Brevete";
}

void Brevete::mostrar() const {
    cout << "[" << tipo() << "] numero: " << numero
         << " | caduca: " << fecha_caducidad
         << " | categoria: " << categoria << endl;
}
