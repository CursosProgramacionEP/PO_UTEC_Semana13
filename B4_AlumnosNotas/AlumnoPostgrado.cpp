#include "AlumnoPostgrado.h"
#include <iostream>
#include <iomanip>

using namespace std;

AlumnoPostgrado::AlumnoPostgrado() {
    this->lugar_trabajo = "sin registrar";
    this->parcial = 0.0;
    this->final_examen = 0.0;
}

AlumnoPostgrado::AlumnoPostgrado(const string& codigo, const string& nombre,
                                 const string& lugar_trabajo,
                                 double parcial, double final_examen, double proyecto)
        : Alumno(codigo, nombre, proyecto) {
    this->lugar_trabajo = lugar_trabajo;
    this->parcial = parcial;
    this->final_examen = final_examen;
}

string AlumnoPostgrado::get_lugar_trabajo() const {
    return lugar_trabajo;
}

string AlumnoPostgrado::modalidad() const {
    return "Post-Grado";
}

// NF = 0.3*Parcial + 0.3*Final + 0.4*Proyecto
double AlumnoPostgrado::nota_final() const {
    return 0.3 * parcial + 0.3 * final_examen + 0.4 * proyecto;
}

double AlumnoPostgrado::nota_aprobatoria() const {
    return 11.00;
}

void AlumnoPostgrado::mostrar() const {
    cout << fixed << setprecision(2)
         << left << setw(12) << modalidad()
         << setw(8) << codigo
         << setw(20) << nombre
         << right << setw(7) << parcial
         << setw(7) << final_examen
         << setw(7) << "-"
         << setw(10) << proyecto
         << setw(9) << nota_final()
         << setw(14) << (aprobado() ? "APROBADO" : "DESAPROBADO") << endl;
    cout << "            trabaja en: " << lugar_trabajo << endl;
}
