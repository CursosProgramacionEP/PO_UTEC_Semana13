#include "Curso.h"
#include <iostream>
#include <iomanip>

using namespace std;

Curso::Curso() {
    this->nombre = "sin nombre";
}

Curso::Curso(const string& nombre) {
    this->nombre = nombre;
}

Curso::~Curso() {
    for (size_t i = 0; i < matriculados.size(); i++) {
        delete matriculados[i];
    }
    matriculados.clear();
}

void Curso::matricular(Alumno* alumno) {
    if (alumno != nullptr) {
        matriculados.push_back(alumno);
    }
}

void Curso::mostrar_calificaciones() const {
    cout << "=== Curso: " << nombre << " ===" << endl;
    cout << left << setw(12) << "MODALIDAD" << setw(8) << "CODIGO" << setw(20) << "NOMBRE"
         << right << setw(7) << "EV1" << setw(7) << "EV2" << setw(7) << "EV3"
         << setw(10) << "PROYECTO" << setw(9) << "NF" << setw(14) << "CONDICION" << endl;
    cout << string(94, '-') << endl;

    // Un solo bucle para las dos modalidades.
    for (size_t i = 0; i < matriculados.size(); i++) {
        matriculados[i]->mostrar();
    }
    cout << string(94, '-') << endl;
}

double Curso::promedio() const {
    if (matriculados.empty()) {
        return 0.0;
    }
    double total = 0.0;
    for (size_t i = 0; i < matriculados.size(); i++) {
        total += matriculados[i]->nota_final();
    }
    return total / matriculados.size();
}

int Curso::total_aprobados() const {
    int cantidad = 0;
    for (size_t i = 0; i < matriculados.size(); i++) {
        if (matriculados[i]->aprobado()) {
            cantidad++;
        }
    }
    return cantidad;
}

int Curso::total_desaprobados() const {
    return static_cast<int>(matriculados.size()) - total_aprobados();
}

Alumno* Curso::mejor_alumno() const {
    if (matriculados.empty()) {
        return nullptr;
    }
    Alumno* mejor = matriculados[0];
    for (size_t i = 1; i < matriculados.size(); i++) {
        if (matriculados[i]->nota_final() > mejor->nota_final()) {
            mejor = matriculados[i];
        }
    }
    return mejor;
}

void Curso::mostrar_estadisticas() const {
    cout << fixed << setprecision(2);
    cout << "Matriculados:  " << matriculados.size() << endl;
    cout << "Promedio:      " << promedio() << endl;
    cout << "Aprobados:     " << total_aprobados() << endl;
    cout << "Desaprobados:  " << total_desaprobados() << endl;

    Alumno* mejor = mejor_alumno();
    if (mejor != nullptr) {
        cout << "Mejor alumno:  " << mejor->get_nombre()
             << " (" << mejor->modalidad() << ") con " << mejor->nota_final() << endl;
    }
}
