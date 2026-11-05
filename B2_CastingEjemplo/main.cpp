#include <iostream>
#include "tipos.h"

int main() {
    // Ejemplos de casting
    real b = 6;
    entero a = 9.99;              // conversion implicita: se pierde precision
    long int velocidad = 65.5;
    entero x = (entero) 3.1415;   // conversion explicita

    std::cout << "real b = 6      -> " << b << std::endl;
    std::cout << "entero a = 9.99 -> " << a << std::endl;
    std::cout << "Velocidad " << velocidad << std::endl;
    std::cout << "(entero) 3.1415 -> " << x << std::endl;

    return 0;
}
