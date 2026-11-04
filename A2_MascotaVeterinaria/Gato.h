#ifndef GATO_H
#define GATO_H

#include <string>
#include "Mascota.h"

class Gato : public Mascota {   // "un gato ES UNA mascota"
public:
    Gato();
    Gato(const std::string& nombre, const std::string& vacuna);

    bool vacunado() override;
};

#endif
