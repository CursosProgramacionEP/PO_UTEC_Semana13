#include "Animal.h"

using namespace std;

Animal::Animal() {
    this->nombre = "sin nombre";
}

Animal::Animal(const string& nombre) {
    this->nombre = nombre;
}

Animal::~Animal() {
}

string Animal::get_nombre() const {
    return nombre;
}

string Animal::sonido() const {
    return "...";
}
