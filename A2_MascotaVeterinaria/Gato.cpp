#include "Gato.h"

using namespace std;

Gato::Gato(const string& nombre, const string& vacuna) : Mascota(nombre, vacuna) {
}

// Un gato solo cuenta como vacunado con la triple felina.
bool Gato::vacunado() {
    return vacuna == "triple felina";
}
