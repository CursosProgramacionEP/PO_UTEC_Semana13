#include "Binaria.h"
#include <iostream>

using namespace std;

Binaria::Binaria() {
    this->companiera = "sin companiera";
    this->separacion = 0.0;
    this->periodo = 0.0;
}

Binaria::Binaria(const string& nombre, double magnitud, double distancia,
                 const string& companiera, double separacion, double periodo)
        : Estrella(nombre, magnitud, distancia) {
    this->companiera = companiera;
    this->separacion = separacion;
    this->periodo = periodo;
}

string Binaria::tipo() const {
    return "Binaria";
}

void Binaria::mostrar() const {
    Estrella::mostrar();
    cout << " | par: " << companiera
         << " | separacion: " << separacion << " ua"
         << " | periodo: " << periodo << " anios" << endl;
}
