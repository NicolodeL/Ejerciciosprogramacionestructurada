#include "estudiante.h"
 //Aqui empezaremos a crear la estrucutura estudiante
#include <stdio.h>
#include <stdlib.h>

// a. Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// e. Funciones para añadir, ver y eliminar estudiantes
void agregarEstudiante(struct Estudiante lista[], int *numEstudiantes);
void verEstudiantes(struct Estudiante lista[], int numEstudiantes);
void eliminarEstudiante(struct Estudiante lista[], int *numEstudiantes);

// Definimos los siguientes datos de la estrucura, nombre, edad y promedio en el main.cpp