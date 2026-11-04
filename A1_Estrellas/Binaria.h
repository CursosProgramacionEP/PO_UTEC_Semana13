#ifndef BINARIA_H
#define BINARIA_H

#include "Estrella.h"
#include "Simple.h"

// Una binaria ES UNA estrella y ademas CONTIENE dos estrellas simples.
class Binaria : public Estrella {
private:
    Simple primera;
    Simple segunda;

public:
    Binaria(double radio1, double radio2);

    bool getFlag() override;
    double getRadio1();
    double getRadio2();
};

#endif
