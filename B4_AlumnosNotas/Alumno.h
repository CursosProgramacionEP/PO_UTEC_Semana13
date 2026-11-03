#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

// Clase abstracta: no existe un alumno "sin modalidad".
// Cada modalidad tiene su propia formula de nota final y su propio minimo aprobatorio.
class Alumno {
protected:
    std::string codigo;
    std::string nombre;
    double proyecto;

public:
    Alumno();
    Alumno(const std::string& codigo, const std::string& nombre, double proyecto);
    virtual ~Alumno();

    std::string get_codigo() const;
    std::string get_nombre() const;

    virtual std::string modalidad() const = 0;
    virtual double nota_final() const = 0;
    virtual double nota_aprobatoria() const = 0;
    virtual void mostrar() const = 0;

    // Esta sí es comun a las dos modalidades: compara con el minimo de cada una.
    bool aprobado() const;
};

#endif
