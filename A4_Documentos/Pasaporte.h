#ifndef PASAPORTE_H
#define PASAPORTE_H

#include <string>
#include "Documento.h"

class Pasaporte : public Documento {
private:
    std::string huella_digital;   // cadena binaria

public:
    Pasaporte();
    Pasaporte(const std::string& numero, const std::string& fecha_caducidad,
              const std::string& huella_digital);

    bool huella_valida() const;

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
