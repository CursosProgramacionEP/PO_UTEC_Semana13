#include <iostream>
#include "Documento.h"
#include "DNI.h"
#include "CEX.h"
#include "Pasaporte.h"
#include "Brevete.h"
#include "Persona.h"

using namespace std;

int main() {
    Persona carlos("Carlos Palomino");
    carlos.agregar_documento(new DNI("45781236", "12/08/2030", "Callao"));
    carlos.agregar_documento(new Pasaporte("P1234567", "05/03/2032", "1011001110"));
    carlos.agregar_documento(new Brevete("Q45781236", "20/11/2028", "A-IIb"));

    Persona lucia("Lucia Fernandes");
    lucia.agregar_documento(new CEX("001234567", "30/06/2029", "15/02/2021"));
    lucia.agregar_documento(new Pasaporte("BR998877", "14/09/2031", "10102X0111"));

    carlos.mostrar_documentos();
    cout << endl;
    lucia.mostrar_documentos();

    cout << "\n--- Buscando el brevete de Carlos ---" << endl;
    Documento* encontrado = carlos.buscar_documento("Brevete");
    if (encontrado != nullptr) {
        cout << "  caduca el " << encontrado->get_fecha_caducidad() << endl;
    }

    cout << "\n--- Buscando el DNI de Lucia ---" << endl;
    if (lucia.buscar_documento("DNI") == nullptr) {
        cout << "  Lucia no tiene DNI: es extranjera" << endl;
    }

    // No hay delete en el main: cada persona libera sus propios documentos.
    return 0;
}
