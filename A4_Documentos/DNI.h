#ifndef DNI_H
#define DNI_H

#include <string>
#include "Documento.h"

class DNI : public Documento {
private:
    std::string ciudad_nacimiento;

public:
    DNI();
    DNI(const std::string& numero, const std::string& fecha_caducidad,
        const std::string& ciudad_nacimiento);

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
