#ifndef ESTRELLA_H
#define ESTRELLA_H

#include <string>

class Estrella {
protected:
    std::string nombre;
    double magnitud;      // brillo aparente
    double distancia;     // anios luz

public:
    Estrella();
    Estrella(const std::string& nombre, double magnitud, double distancia);
    virtual ~Estrella();

    std::string get_nombre() const;

    // Las dos funciones que cada subclase responde a su manera.
    virtual std::string tipo() const;
    virtual void mostrar() const;
};

#endif
