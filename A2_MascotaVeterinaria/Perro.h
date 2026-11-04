#ifndef PERRO_H
#define PERRO_H

#include <string>
#include "Mascota.h"

class Perro : public Mascota {   // "un perro ES UNA mascota"
private:
    bool adiestrado;

public:
    Perro();
    Perro(const std::string& nombre, const std::string& vacuna, bool adiestrado);

    bool vacunado() override;
    bool entrenado();
};

#endif
