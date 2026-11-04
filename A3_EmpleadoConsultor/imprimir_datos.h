#ifndef IMPRIMIR_DATOS_H
#define IMPRIMIR_DATOS_H

#include <iostream>
#include <iomanip>

// Funcion generica: sirve para cualquier tipo que sepa responder
// getNombre() y salario(horas).
template <typename T>
void imprimir_datos(T& F, double horas) {
    std::cout << std::fixed << std::setprecision(2)
              << std::left << std::setw(16) << F.getNombre()
              << std::right << std::setw(8) << horas << " h"
              << std::setw(12) << F.salario(horas) << std::endl;
}

#endif
