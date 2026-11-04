#include <iostream>
#include <vector>
#include "Mascota.h"
#include "Gato.h"
#include "Perro.h"
#include "Veterinaria.h"

using namespace std;

int main() {
    // El main crea y libera las mascotas: la veterinaria solo las conoce.
    vector<Mascota*> mascotas;
    mascotas.push_back(new Perro("Rocky", "antirrabica", true));
    mascotas.push_back(new Gato("Michi", "triple felina"));
    mascotas.push_back(new Perro("Lassie", "triple felina", false));
    mascotas.push_back(new Gato("Pelusa", ""));

    Veterinaria clinica("Patitas Felices");
    for (size_t i = 0; i < mascotas.size(); i++) {
        clinica.agregar_mascota(mascotas[i]);
    }

    clinica.imprimir();

    cout << "\n--- Metodo propio del perro ---" << endl;
    Perro boby("Boby", "antirrabica", true);
    cout << boby.getNombre() << (boby.entrenado() ? " esta entrenado" : " no esta entrenado") << endl;

    for (size_t i = 0; i < mascotas.size(); i++) {
        delete mascotas[i];
    }
    mascotas.clear();

    return 0;
}
