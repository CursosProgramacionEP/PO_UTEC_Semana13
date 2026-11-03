#include "AlumnoPregrado.h"
#include <iostream>
#include <iomanip>

using namespace std;

AlumnoPregrado::AlumnoPregrado() {
    this->pc1 = 0.0;
    this->pc2 = 0.0;
    this->pc3 = 0.0;
}

AlumnoPregrado::AlumnoPregrado(const string& codigo, const string& nombre,
                               double pc1, double pc2, double pc3, double proyecto)
        : Alumno(codigo, nombre, proyecto) {
    this->pc1 = pc1;
    this->pc2 = pc2;
    this->pc3 = pc3;
}

string AlumnoPregrado::modalidad() const {
    return "Pre-Grado";
}

// NF = 0.2*PC1 + 0.2*PC2 + 0.2*PC3 + 0.4*Proyecto
double AlumnoPregrado::nota_final() const {
    return 0.2 * pc1 + 0.2 * pc2 + 0.2 * pc3 + 0.4 * proyecto;
}

double AlumnoPregrado::nota_aprobatoria() const {
    return 13.00;
}

void AlumnoPregrado::mostrar() const {
    cout << fixed << setprecision(2)
         << left << setw(12) << modalidad()
         << setw(8) << codigo
         << setw(20) << nombre
         << right << setw(7) << pc1
         << setw(7) << pc2
         << setw(7) << pc3
         << setw(10) << proyecto
         << setw(9) << nota_final()
         << setw(14) << (aprobado() ? "APROBADO" : "DESAPROBADO") << endl;
}
