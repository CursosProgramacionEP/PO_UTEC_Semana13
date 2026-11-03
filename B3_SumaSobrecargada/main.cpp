#include <iostream>
#include <vector>
#include "tipos.h"
#include "operaciones.h"

using namespace std;

int main() {
    cout << "--- Dos argumentos ---" << endl;
    cout << "suma(7, 5)          = " << suma(7, 5) << endl;
    cout << "suma(7.5f, 5.25f)   = " << suma(7.5f, 5.25f) << endl;

    cout << "\n--- Tres argumentos ---" << endl;
    cout << "suma(1, 2, 3)       = " << suma(1, 2, 3) << endl;
    cout << "suma(1.1f, 2.2f, 3.3f) = " << suma(1.1f, 2.2f, 3.3f) << endl;

    cout << "\n--- Un vector completo ---" << endl;
    vector<entero> enteros = {4, 8, 15, 16, 23, 42};
    vector<real> reales = {1.5f, 2.25f, 3.75f};
    cout << "suma(vector de enteros) = " << suma(enteros) << endl;
    cout << "suma(vector de reales)  = " << suma(reales) << endl;

    cout << "\n--- Valores ingresados por el usuario ---" << endl;
    entero e1 = 0, e2 = 0;
    cout << "Ingrese dos numeros enteros: ";
    cin >> e1 >> e2;
    cout << "Suma entera: " << suma(e1, e2) << endl;

    real r1 = 0, r2 = 0;
    cout << "Ingrese dos numeros reales: ";
    cin >> r1 >> r2;
    cout << "Suma real: " << suma(r1, r2) << endl;

    // suma(7, 5.5f);   <- ambigua: ni la version entera ni la real son coincidencia exacta
    return 0;
}
