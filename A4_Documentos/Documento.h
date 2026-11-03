#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <string>

// Clase abstracta: ningun documento "generico" tiene sentido por si solo.
class Documento {
protected:
    std::string numero;
    std::string fecha_caducidad;   // formato DD/MM/AAAA

public:
    Documento();
    Documento(const std::string& numero, const std::string& fecha_caducidad);
    virtual ~Documento();

    std::string get_numero() const;
    std::string get_fecha_caducidad() const;

    virtual std::string tipo() const = 0;    // funcion virtual pura
    virtual void mostrar() const = 0;        // funcion virtual pura
};

#endif
