#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Prototipos de funciones
void instanciacionYAsignacion();
void agregarEstudiante(struct Estudiante lista[], int *numEstudiantes);
void verEstudiantes(struct Estudiante lista[], int numEstudiantes);
void eliminarEstudiante(struct Estudiante lista[], int *numEstudiantes);

#endif