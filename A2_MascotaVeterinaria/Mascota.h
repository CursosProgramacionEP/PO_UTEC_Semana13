#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>

class Mascota {
protected:
    std::string nombre;
    int edad;
    double peso;

public:
    Mascota();
    Mascota(const std::string& nombre, int edad, double peso);
    virtual ~Mascota();

    std::string get_nombre() const;

    virtual std::string especie() const;
    virtual std::string sonido() const;
    virtual void mostrar() const;
};

#endif
