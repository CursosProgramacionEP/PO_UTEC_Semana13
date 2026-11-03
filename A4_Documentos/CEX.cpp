#include "CEX.h"
#include <iostream>

using namespace std;

CEX::CEX() {
    this->fecha_ingreso = "01/01/2000";
}

CEX::CEX(const string& numero, const string& fecha_caducidad,
         const string& fecha_ingreso)
        : Documento(numero, fecha_caducidad) {
    this->fecha_ingreso = fecha_ingreso;
}

string CEX::tipo() const {
    return "CEX";
}

void CEX::mostrar() const {
    cout << "[" << tipo() << "] numero: " << numero
         << " | caduca: " << fecha_caducidad
         << " | ingreso al pais: " << fecha_ingreso << endl;
}
