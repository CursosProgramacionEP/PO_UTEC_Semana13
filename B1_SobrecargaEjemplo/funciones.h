#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "tipos.h"

// Mismo nombre, distinta lista de parametros: sobrecarga de funciones.
// El compilador elige segun el tipo de los argumentos.
void swap(entero&, entero&);
void swap(real&, real&);

#endif
