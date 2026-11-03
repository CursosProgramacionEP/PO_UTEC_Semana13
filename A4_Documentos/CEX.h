#ifndef CEX_H
#define CEX_H

#include <string>
#include "Documento.h"

class CEX : public Documento {
private:
    std::string fecha_ingreso;   // fecha de ingreso al pais

public:
    CEX();
    CEX(const std::string& numero, const std::string& fecha_caducidad,
        const std::string& fecha_ingreso);

    std::string tipo() const override;
    void mostrar() const override;
};

#endif
