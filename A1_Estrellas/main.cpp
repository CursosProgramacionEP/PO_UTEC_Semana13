#include <iostream>
#include <vector>
#include "Estrella.h"
#include "Simple.h"
#include "Binaria.h"
#include "imprimir_datos.h"

using namespace std;

int main() {
    vector<Estrella*> cielo;

    cielo.push_back(new Simple(1.0));
    cielo.push_back(new Simple(0.7));
    cielo.push_back(new Simple(2.4));
    cielo.push_back(new Simple(12.0));
    cielo.push_back(new Simple(0.3));

    cielo.push_back(new Binaria(1.7, 0.9));
    cielo.push_back(new Binaria(1.2, 0.8));
    cielo.push_back(new Binaria(2.0, 1.1));
    cielo.push_back(new Binaria(0.6, 0.5));
    cielo.push_back(new Binaria(3.5, 2.8));

    cout << "--- Catalogo de estrellas ---" << endl;
    for (size_t i = 0; i < cielo.size(); i++) {
        cout << i + 1 << ". ";
        imprimir_datos(*cielo[i]);
    }

    cout << "\n--- Total: " << cielo.size() << " estrellas ---" << endl;

    for (size_t i = 0; i < cielo.size(); i++) {
        delete cielo[i];
    }
    cielo.clear();

    return 0;
}
