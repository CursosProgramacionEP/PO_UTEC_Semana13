#include "Consultor.h"

using namespace std;

// Consultor sin salario fijo: cobra por hora, como cualquier empleado.
Consultor::Consultor(const string& nombre, double sph) : Empleado(nombre, sph) {
    this->es_pagado = false;
    this->fijo = 0.0;
}

// Consultor con salario fijo: cobra el monto pactado.
Consultor::Consultor(const string& nombre, double sph, double fijo)
        : Empleado(nombre, sph) {
    this->es_pagado = true;
    this->fijo = fijo;
}

bool Consultor::getEsPagado() {
    return es_pagado;
}

void Consultor::cambiar(bool es_pagado, double fijo) {
    this->es_pagado = es_pagado;
    this->fijo = fijo;
}

// Si tiene salario fijo cobra ese monto; si no, se calcula como el de cualquier empleado.
double Consultor::salario(double horas) {
    if (es_pagado) {
        return fijo;
    }
    return Empleado::salario(horas);
}
