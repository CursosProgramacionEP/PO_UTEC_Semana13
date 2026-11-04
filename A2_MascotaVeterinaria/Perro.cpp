#include "Perro.h"

using namespace std;

Perro::Perro() {
    this->adiestrado = false;
}

Perro::Perro(const string& nombre, const string& vacuna, bool adiestrado)
        : Mascota(nombre, vacuna) {
    this->adiestrado = adiestrado;
}

// Un perro solo cuenta como vacunado con la antirrabica.
bool Perro::vacunado() {
    return vacuna == "antirrabica";
}

// Metodo propio del perro: no existe en Mascota ni en Gato.
bool Perro::entrenado() {
    return adiestrado;
}
