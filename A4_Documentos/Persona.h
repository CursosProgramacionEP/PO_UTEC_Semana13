#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <vector>
#include "Documento.h"

class Persona {
private:
    std::string nombre;
    std::vector<Documento*> documentos;

public:
    Persona();
    Persona(const std::string& nombre);

    // La persona es duenia de sus documentos: los libera en el destructor.
    ~Persona();

    void agregar_documento(Documento* documento);
    void mostrar_documentos() const;
    Documento* buscar_documento(const std::string& tipo) const;
    int total_documentos() const;
};

#endif
