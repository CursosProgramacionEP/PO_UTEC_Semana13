#include "DNI.h"
#include <iostream>

using namespace std;

DNI::DNI() {
    this->ciudad_nacimiento = "sin ciudad";
}

DNI::DNI(const string& numero, const string& fecha_caducidad,
         const string& ciudad_nacimiento)
        : Documento(numero, fecha_caducidad) {
    this->ciudad_nacimiento = ciudad_nacimiento;
}

string DNI::tipo() const {
    return "DNI";
}

void DNI::mostrar() const {
    cout << "[" << tipo() << "] numero: " << numero
         << " | caduca: " << fecha_caducidad
         << " | ciudad de nacimiento: " << ciudad_nacimiento << endl;
}
