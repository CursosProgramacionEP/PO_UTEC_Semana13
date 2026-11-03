#include <iostream>
#include <vector>
#include "Estrella.h"
#include "Simple.h"
#include "Binaria.h"

using namespace std;

// Funcion generica: recibe punteros a la superclase y no sabe ni le importa
// si cada elemento es Simple o Binaria. El virtual decide que mostrar() corre.
void imprimir_estrellas(const vector<Estrella*>& estrellas) {
    for (size_t i = 0; i < estrellas.size(); i++) {
        cout << i + 1 << ". ";
        estrellas[i]->mostrar();
    }
}

int main() {
    vector<Estrella*> cielo;

    cout << "--- Catalogo de estrellas ---" << endl;

    cielo.push_back(new Simple("Sol", -26.74, 0.0000158, "G2"));
    cielo.push_back(new Simple("Vega", 0.03, 25.0, "A0"));
    cielo.push_back(new Simple("Betelgeuse", 0.50, 548.0, "M1"));
    cielo.push_back(new Simple("Rigel", 0.13, 863.0, "B8"));
    cielo.push_back(new Simple("Altair", 0.77, 16.7, "A7"));

    cielo.push_back(new Binaria("Sirio A", -1.46, 8.6, "Sirio B", 20.0, 50.1));
    cielo.push_back(new Binaria("Alfa Centauri A", 0.01, 4.37, "Alfa Centauri B", 23.0, 79.9));
    cielo.push_back(new Binaria("Procyon A", 0.34, 11.46, "Procyon B", 15.0, 40.8));
    cielo.push_back(new Binaria("Albireo A", 3.18, 430.0, "Albireo B", 4400.0, 100000.0));
    cielo.push_back(new Binaria("Mizar A", 2.23, 82.9, "Mizar B", 380.0, 5000.0));

    imprimir_estrellas(cielo);

    cout << "\n--- Total: " << cielo.size() << " estrellas ---" << endl;

    for (size_t i = 0; i < cielo.size(); i++) {
        delete cielo[i];
    }
    cielo.clear();

    return 0;
}
