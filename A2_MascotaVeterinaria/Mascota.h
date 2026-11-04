#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>

class Mascota {
protected:
    std::string nombre;
    std::string vacuna;

public:
    Mascota(const std::string& nombre, const std::string& vacuna);
    virtual ~Mascota();

    std::string getNombre();
    std::string getVacuna();

    // Cada especie tiene su propia vacuna obligatoria.
    virtual bool vacunado();
};

#endif
