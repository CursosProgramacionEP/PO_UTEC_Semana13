#ifndef PERRO_H
#define PERRO_H

#include <string>
#include "Mascota.h"

class Perro : public Mascota {   // "un perro ES UNA mascota"
private:
    std::string raza;

public:
    Perro();
    Perro(const std::string& nombre, int edad, double peso, const std::string& raza);

    std::string especie() const override;
    std::string sonido() const override;
    void mostrar() const override;
};

#endif
