#include <iostream>
#include <iomanip>
#include <vector>
#include "Empleado.h"
#include "Consultor.h"

using namespace std;

int main() {
    vector<Empleado*> planilla;

    planilla.push_back(new Empleado("E001", "Ana Quispe", 160, 25.00));
    planilla.push_back(new Empleado("E002", "Luis Torres", 180, 18.50));
    planilla.push_back(new Consultor("C001", "Marta Rios", 40, 60.00, "Base de datos"));
    planilla.push_back(new Consultor("C002", "Jorge Leon", 30, 55.00, "Redes", 4500.00));
    planilla.push_back(new Consultor("C003", "Rosa Diaz", 50, 48.00, "Seguridad", 6000.00));

    cout << left << setw(10) << "TIPO" << setw(8) << "CODIGO" << setw(20) << "NOMBRE"
         << right << setw(10) << "HORAS" << setw(13) << "TARIFA" << setw(12) << "SALARIO" << endl;
    cout << string(73, '-') << endl;

    // Un solo bucle para empleados y consultores: salario() resuelve cada caso.
    double total = 0.0;
    for (size_t i = 0; i < planilla.size(); i++) {
        planilla[i]->mostrar();
        total += planilla[i]->salario();
    }

    cout << string(73, '-') << endl;
    cout << "Total de la planilla: " << fixed << setprecision(2) << total << endl;

    for (size_t i = 0; i < planilla.size(); i++) {
        delete planilla[i];
    }
    planilla.clear();

    return 0;
}
