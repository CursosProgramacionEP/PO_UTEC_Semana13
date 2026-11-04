#include <iostream>
#include "tipos.h"

using namespace std;

int main() {
    cout << "--- 1. Conversion implicita y explicita ---" << endl;
    real b = 6;
    entero a = 9.99;              // conversion implicita: se pierde precision
    long int velocidad = 65.5;    // se pierde la parte decimal
    entero x = (entero) 3.1415;   // conversion explicita al estilo C

    cout << "real b = 6         -> " << b << endl;
    cout << "entero a = 9.99    -> " << a << endl;
    cout << "Velocidad          -> " << velocidad << endl;
    cout << "(entero) 3.1415    -> " << x << endl;

    cout << "\n--- 2. La escalera de promocion ---" << endl;
    caracter letra = 'A';
    entero codigo = letra;        // hacia la derecha: sin perdida
    real mitad = codigo / 2;      // la division es entera ANTES de convertirse
    real mitad_ok = codigo / 2.0f;

    cout << "letra 'A'          -> " << codigo << endl;
    cout << "codigo / 2         -> " << mitad << "  (division entera)" << endl;
    cout << "codigo / 2.0f      -> " << mitad_ok << endl;

    cout << "\n--- 3. static_cast ---" << endl;
    double precio = 19.99;
    entero soles = static_cast<entero>(precio);
    cout << "static_cast<entero>(19.99)    -> " << soles << endl;
    cout << "codigo / static_cast<real>(2) -> " << codigo / static_cast<real>(2) << endl;

    cout << "\n--- 4. const_cast ---" << endl;
    const entero limite = 100;
    entero* p_limite = const_cast<entero*>(&limite);
    cout << "limite leido por puntero      -> " << *p_limite << endl;

    cout << "\n--- 5. reinterpret_cast ---" << endl;
    entero numero = 65;
    caracter* p_byte = reinterpret_cast<caracter*>(&numero);
    cout << "primer byte de 65 como caracter -> " << *p_byte << endl;

    return 0;
}
