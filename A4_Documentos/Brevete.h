#ifndef BREVETE_H
#define BREVETE_H

#include <string>
#include "Documento.h"

class Brevete : public Documento {
private:
    std::string categoria;   // A-I, A-IIa, B-I, ...

public:
    Brevete();
    Brevete(const std::string& numero, const std::string& fecha_caducidad,
            const std::string& categoria);

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
