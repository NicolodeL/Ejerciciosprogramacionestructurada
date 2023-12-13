
 //Aqui empezaremos a crear la estrucutura estudiante
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a. Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// e. Funciones para añadir, ver y eliminar estudiantes
void instanciacionYAsignacion() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

// Definimos los siguientes datos de la estrucura, nombre, edad y promedio en el main.cpp

     struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
     if (estudiante2 == NULL) {
         printf("Error al asignar memoria con malloc.\n");
         return;
     }

     strcpy(estudiante2->nombre, "Maria");
     estudiante2->edad = 22;
     estudiante2->promedio = 7.8;