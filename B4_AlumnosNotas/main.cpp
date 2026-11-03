#include <iostream>
#include "Alumno.h"
#include "AlumnoPregrado.h"
#include "AlumnoPostgrado.h"
#include "Curso.h"

using namespace std;

int main() {
    Curso cpp("Programacion en C++");

    cpp.matricular(new AlumnoPregrado("P001", "Ana Quispe", 15, 14, 16, 18));
    cpp.matricular(new AlumnoPregrado("P002", "Luis Torres", 10, 12, 11, 14));
    cpp.matricular(new AlumnoPregrado("P003", "Rosa Diaz", 18, 17, 19, 20));
    cpp.matricular(new AlumnoPostgrado("G001", "Jorge Leon", "Telefonica", 12, 13, 15));
    cpp.matricular(new AlumnoPostgrado("G002", "Marta Rios", "BCP", 9, 10, 11));
    cpp.matricular(new AlumnoPostgrado("G003", "Pedro Soto", "Indra", 16, 15, 17));

    cpp.mostrar_calificaciones();

    cout << "\n=== Estadisticas del curso ===" << endl;
    cpp.mostrar_estadisticas();

    // No hay delete en el main: el curso libera a sus alumnos.
    return 0;
}
