#include <iostream>
#include "funciones.h"
#include "Alumno.h"

using namespace std;

int main() {
    std::cout << "Ingrese los valores enteros a intercambiar:" << std::endl;
    int x = 0, y = 0;
    std::cin >> x >> y;
    swap(x, y);
    std::cout << x << " : " << y;

    std::cout << "\nIngrese los valores reales a intercambiar:" << std::endl;
    float r1 = 0, r2 = 0;
    std::cin >> r1 >> r2;
    swap(r1, r2);
    std::cout << r1 << " : " << r2;

    // sobrecarga de operadores
    Alumno a1(10);
    Alumno a2(15);
    a1 += a2;
    cout << "\n" << a1.getEdad() << endl;

    return 0;
}
