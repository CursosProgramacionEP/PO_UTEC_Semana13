#ifndef ALUMNOPREGRADO_H
#define ALUMNOPREGRADO_H

#include <string>
#include "Alumno.h"

class AlumnoPregrado : public Alumno {
private:
    double pc1;
    double pc2;
    double pc3;

public:
    AlumnoPregrado();
    AlumnoPregrado(const std::string& codigo, const std::string& nombre,
                   double pc1, double pc2, double pc3, double proyecto);

    std::string modalidad() const override;
    double nota_final() const override;
    double nota_aprobatoria() const override;
    void mostrar() const override;
};

#endif
