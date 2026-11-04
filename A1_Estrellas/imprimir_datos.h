#ifndef IMPRIMIR_DATOS_H
#define IMPRIMIR_DATOS_H

#include <iostream>
#include "Estrella.h"
#include "Simple.h"
#include "Binaria.h"

// Funcion generica: una sola plantilla sirve para cualquier estrella.
// getFlag() dice si hay uno o dos radios que imprimir.
template <typename T>
void imprimir_datos(T& F) {
    if (F.getFlag()) {
        Binaria& b = static_cast<Binaria&>(F);
        std::cout << "Binaria | radio 1: " << b.getRadio1()
                  << " | radio 2: " << b.getRadio2() << std::endl;
    } else {
        Simple& s = static_cast<Simple&>(F);
        std::cout << "Simple  | radio: " << s.getRadio() << std::endl;
    }
}

#endif
