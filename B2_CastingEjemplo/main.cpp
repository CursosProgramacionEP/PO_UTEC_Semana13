#include <iostream>
#include "tipos.h"
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main() {
    cout << "--- 1. Conversion implicita ---" << endl;
    // Ejemplos de casting (diapositiva 16)
    real b = 6;
    entero a = 9.99;              // conversion implicita: se pierde precision
    long int velocidad = 65.5;    // se pierde la parte decimal
    entero x = (entero) 3.1415;   // conversion explicita al estilo C

    cout << "real b = 6         -> " << b << endl;
    cout << "entero a = 9.99    -> " << a << endl;
    cout << "Velocidad          -> " << velocidad << endl;
    cout << "(entero) 3.1415    -> " << x << endl;

    cout << "\n--- 2. La escalera de promocion ---" << endl;
    // bool -> char -> short -> int -> unsigned -> long -> float -> double
    caracter letra = 'A';
    entero codigo = letra;        // hacia la derecha: sin perdida
    real mitad = codigo / 2;      // OJO: la division es entera ANTES de convertirse
    real mitad_ok = codigo / 2.0f;

    cout << "letra 'A'          -> " << codigo << endl;
    cout << "codigo / 2         -> " << mitad << "  (division entera)" << endl;
    cout << "codigo / 2.0f      -> " << mitad_ok << endl;

    cout << "\n--- 3. static_cast: la version con nombre ---" << endl;
    double precio = 19.99;
    entero soles = static_cast<entero>(precio);
    cout << "static_cast<entero>(19.99) -> " << soles << endl;
    cout << "codigo / static_cast<real>(2) -> " << codigo / static_cast<real>(2) << endl;

    cout << "\n--- 4. const_cast: quitar el const ---" << endl;
    const entero limite = 100;
    entero* p_limite = const_cast<entero*>(&limite);
    cout << "limite leido por puntero   -> " << *p_limite << endl;
    cout << "(modificarlo seria comportamiento indefinido)" << endl;

    cout << "\n--- 5. reinterpret_cast: ver los mismos bytes de otra forma ---" << endl;
    entero numero = 65;
    caracter* p_byte = reinterpret_cast<caracter*>(&numero);
    cout << "primer byte de 65 como caracter -> " << *p_byte << endl;

    cout << "\n--- 6. dynamic_cast: preguntar de que clase es ---" << endl;
    Animal* animales[2] = { new Gato("Michi"), new Animal("Generico") };

    for (int i = 0; i < 2; i++) {
        cout << animales[i]->get_nombre() << " dice " << animales[i]->sonido();
        Gato* gato = dynamic_cast<Gato*>(animales[i]);
        if (gato != nullptr) {
            cout << " -> si era un gato: ";
            gato->ronronear();
        } else {
            cout << " -> no es un gato" << endl;
        }
    }

    for (int i = 0; i < 2; i++) {
        delete animales[i];
    }

    return 0;
}
