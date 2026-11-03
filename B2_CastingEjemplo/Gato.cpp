#include "Gato.h"
#include <iostream>

using namespace std;

Gato::Gato() {
}

Gato::Gato(const string& nombre) : Animal(nombre) {
}

string Gato::sonido() const {
    return "Miau";
}

void Gato::ronronear() const {
    cout << nombre << " ronronea" << endl;
}
