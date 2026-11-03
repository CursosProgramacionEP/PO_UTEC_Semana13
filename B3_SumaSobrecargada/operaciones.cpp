#include "operaciones.h"

entero suma(entero a, entero b) {
    return a + b;
}

real suma(real a, real b) {
    return a + b;
}

entero suma(entero a, entero b, entero c) {
    return a + b + c;
}

real suma(real a, real b, real c) {
    return a + b + c;
}

entero suma(const std::vector<entero>& valores) {
    entero total = 0;
    for (std::size_t i = 0; i < valores.size(); i++) {
        total += valores[i];
    }
    return total;
}

real suma(const std::vector<real>& valores) {
    real total = 0;
    for (std::size_t i = 0; i < valores.size(); i++) {
        total += valores[i];
    }
    return total;
}
