#ifndef IMPRIMIR_DATOS_H
#define IMPRIMIR_DATOS_H

#include <iostream>

// Funcion generica: sirve para cualquier tipo que sepa responder
// getNombre(), getVacuna() y vacunado().
template <typename T>
void imprimir_datos(T& F) {
    std::cout << F.getNombre()
              << " | vacuna: " << (F.getVacuna().empty() ? "ninguna" : F.getVacuna())
              << " | " << (F.vacunado() ? "vacunado" : "NO vacunado")
              << std::endl;
}

#endif
