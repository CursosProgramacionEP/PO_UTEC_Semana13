#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

// Clase polimorfica: hace falta al menos una funcion virtual para usar dynamic_cast.
class Animal {
protected:
    std::string nombre;

public:
    Animal();
    Animal(const std::string& nombre);
    virtual ~Animal();

    std::string get_nombre() const;
    virtual std::string sonido() const;
};

#endif
