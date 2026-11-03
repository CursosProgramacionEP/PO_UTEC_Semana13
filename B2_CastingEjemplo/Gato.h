#ifndef GATO_H
#define GATO_H

#include <string>
#include "Animal.h"

class Gato : public Animal {
public:
    Gato();
    Gato(const std::string& nombre);

    std::string sonido() const override;
    void ronronear() const;   // metodo propio: no existe en Animal
};

#endif
