#include <iostream>
#include <iomanip>
#include <vector>
#include "Empleado.h"
#include "Consultor.h"
#include "imprimir_datos.h"

using namespace std;

int main() {
    vector<Empleado*> planilla;

    planilla.push_back(new Empleado("Ana Quispe", 25.00));
    planilla.push_back(new Empleado("Luis Torres", 18.50));
    planilla.push_back(new Consultor("Marta Rios", 60.00));
    planilla.push_back(new Consultor("Jorge Leon", 55.00, 4500.00));

    double horas = 160;

    cout << left << setw(16) << "NOMBRE" << right << setw(10) << "HORAS"
         << setw(12) << "SALARIO" << endl;
    cout << string(38, '-') << endl;

    // Un solo bucle para empleados y consultores: salario() resuelve cada caso.
    for (size_t i = 0; i < planilla.size(); i++) {
        imprimir_datos(*planilla[i], horas);
    }

    cout << "\n--- Marta pasa a tener salario fijo ---" << endl;
    Consultor marta("Marta Rios", 60.00);
    marta.cambiar(true, 7000.00);
    imprimir_datos(marta, horas);

    for (size_t i = 0; i < planilla.size(); i++) {
        delete planilla[i];
    }
    planilla.clear();

    return 0;
}
