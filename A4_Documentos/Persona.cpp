#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona() {
    this->nombre = "sin nombre";
}

Persona::Persona(const string& nombre) {
    this->nombre = nombre;
}

Persona::~Persona() {
    for (size_t i = 0; i < documentos.size(); i++) {
        delete documentos[i];
    }
    documentos.clear();
}

void Persona::agregar_documento(Documento* documento) {
    if (documento != nullptr) {
        documentos.push_back(documento);
    }
}

void Persona::mostrar_documentos() const {
    cout << "Documentos de " << nombre << ":" << endl;
    for (size_t i = 0; i < documentos.size(); i++) {
        cout << "  ";
        documentos[i]->mostrar();
    }
}

Documento* Persona::buscar_documento(const string& tipo) const {
    for (size_t i = 0; i < documentos.size(); i++) {
        if (documentos[i]->tipo() == tipo) {
            return documentos[i];
        }
    }
    return nullptr;
}

int Persona::total_documentos() const {
    return static_cast<int>(documentos.size());
}
