#ifndef ALUMNOPOSTGRADO_H
#define ALUMNOPOSTGRADO_H

#include <string>
#include "Alumno.h"

class AlumnoPostgrado : public Alumno {
private:
    std::string lugar_trabajo;
    double parcial;
    double final_examen;

public:
    AlumnoPostgrado();
    AlumnoPostgrado(const std::string& codigo, const std::string& nombre,
                    const std::string& lugar_trabajo,
                    double parcial, double final_examen, double proyecto);

    std::string get_lugar_trabajo() const;

    std::string modalidad() const override;
    double nota_final() const override;
    double nota_aprobatoria() const override;
    void mostrar() const override;
};

#endif
