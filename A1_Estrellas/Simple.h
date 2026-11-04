#ifndef SIMPLE_H
#define SIMPLE_H

#include "Estrella.h"

class Simple : public Estrella {   // "una estrella simple ES UNA estrella"
public:
    Simple();
    Simple(double radio);

    bool getFlag() override;
    double getRadio();
};

#endif
