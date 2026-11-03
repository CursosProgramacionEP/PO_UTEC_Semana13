#ifndef BINARIA_H
#define BINARIA_H

#include <string>
#include "Estrella.h"

class Binaria : public Estrella {   // "una estrella binaria ES UNA estrella"
private:
    std::string companiera;
    double separacion;    // unidades astronomicas
    double periodo;       // anios

public:
    Binaria();
    Binaria(const std::string& nombre, double magnitud, double distancia,
            const std::string& companiera, double separacion, double periodo);

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
