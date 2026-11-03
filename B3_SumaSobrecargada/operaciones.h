#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <cstddef>
#include <vector>
#include "tipos.h"

// Un solo nombre, varias listas de parametros.
// El compilador elige la version por el tipo y la cantidad de argumentos.
entero suma(entero a, entero b);
real   suma(real a, real b);

entero suma(entero a, entero b, entero c);
real   suma(real a, real b, real c);

entero suma(const std::vector<entero>& valores);
real   suma(const std::vector<real>& valores);

#endif
