#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Prototipos de funciones
struct Estudiante *crearEstudiante(const char *nombre, int edad, float promedio);
void liberarEstudiante(struct Estudiante *estudiante);

#endif