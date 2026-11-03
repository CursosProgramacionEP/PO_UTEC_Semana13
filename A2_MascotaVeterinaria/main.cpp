#include <iostream>
#include <vector>
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include "Veterinaria.h"

using namespace std;

int main() {
    // El main crea y libera las mascotas: la veterinaria solo las conoce.
    vector<Mascota*> mascotas;
    mascotas.push_back(new Perro("Rocky", 3, 18.5, "Labrador"));
    mascotas.push_back(new Gato("Michi", 2, 4.2, true));
    mascotas.push_back(new Perro("Lassie", 5, 22.0, "Collie"));
    mascotas.push_back(new Gato("Pelusa", 1, 3.1, false));
    mascotas.push_back(new Perro("Boby", 7, 9.8, "Mestizo"));

    Veterinaria clinica("Patitas Felices");
    for (size_t i = 0; i < mascotas.size(); i++) {
        clinica.registrar(mascotas[i]);
    }

    clinica.imprimir_pacientes();

    cout << "\n--- Retirando a Lassie ---" << endl;
    if (clinica.retirar("Lassie")) {
        cout << "Lassie fue dada de alta" << endl;
    }

    cout << endl;
    clinica.imprimir_pacientes();

    cout << "\n--- Retirando a un paciente que no existe ---" << endl;
    if (!clinica.retirar("Firulais")) {
        cout << "Firulais no esta registrado" << endl;
    }

    for (size_t i = 0; i < mascotas.size(); i++) {
        delete mascotas[i];
    }
    mascotas.clear();

    return 0;
}
