
#include "estudiante.h"
#include <iostream>
#include <cstring>

// Función para crear un estudiante y asignarle valores
struct Estudiante *crearEstudiante(const char *nombre, int edad, float promedio) {
    struct Estudiante *nuevoEstudiante = new struct Estudiante;
    std::strcpy(nuevoEstudiante->nombre, nombre);
    nuevoEstudiante->edad = edad;
    nuevoEstudiante->promedio = promedio;
    return nuevoEstudiante;
}

// Función para liberar la memoria de un estudiante
void liberarEstudiante(struct Estudiante *estudiante) {
    delete estudiante;
}