#ifndef GATO_H
#define GATO_H

#include <string>
#include "Mascota.h"

class Gato : public Mascota {   // "un gato ES UNA mascota"
private:
    bool pelo_largo;

public:
    Gato();
    Gato(const std::string& nombre, int edad, double peso, bool pelo_largo);

    std::string especie() const override;
    std::string sonido() const override;
    void mostrar() const override;
};

#endif
