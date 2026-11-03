#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>
#include "Alumno.h"

class Curso {
private:
    std::string nombre;
    std::vector<Alumno*> matriculados;

public:
    Curso();
    Curso(const std::string& nombre);

    // El curso es duenio de sus alumnos: los libera en el destructor.
    ~Curso();

    void matricular(Alumno* alumno);

    void mostrar_calificaciones() const;
    void mostrar_estadisticas() const;

    double promedio() const;
    int total_aprobados() const;
    int total_desaprobados() const;
    Alumno* mejor_alumno() const;
};

#endif
