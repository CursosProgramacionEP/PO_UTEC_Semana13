#ifndef ESTRELLA_H
#define ESTRELLA_H

// Clase abstracta: toda estrella sabe decir si es binaria o no,
// pero "una estrella generica" no se puede instanciar.
class Estrella {
protected:
    double radio;
    bool esBinaria;

public:
    Estrella();
    Estrella(double radio, bool esBinaria);
    virtual ~Estrella();

    virtual bool getFlag() = 0;
};

#endif
