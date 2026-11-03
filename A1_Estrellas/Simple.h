#ifndef SIMPLE_H
#define SIMPLE_H

#include <string>
#include "Estrella.h"

class Simple : public Estrella {   // "una estrella simple ES UNA estrella"
private:
    std::string clase_espectral;

public:
    Simple();
    Simple(const std::string& nombre, double magnitud, double distancia,
           const std::string& clase_espectral);

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
