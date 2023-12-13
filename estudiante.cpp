
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
 void agregarEstudiante(struct Estudiante lista[], int *numEstudiantes);
 void verEstudiantes(struct Estudiante lista[], int numEstudiantes);
 void eliminarEstudiante(struct Estudiante lista[], int *numEstudiantes);


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
     //utilizo punteros para navegar por el codigo
     struct Estudiante *punteroEstudiante;
     punteroEstudiante = &estudiante1;
     struct Estudiante listaEstudiantes[100]; // Supongamos que la lista puede contener hasta 100 estudiantes
     int numEstudiantes = 0;
     int opcion;
     do {
         printf("\n--- Menú ---\n");
         printf("1. Agregar Estudiante\n");
         printf("2. Ver Estudiantes\n");
         printf("3. Eliminar Estudiante\n");
         printf("4. Salir\n");
         printf("Seleccione una opción: ");
         scanf("%d", &opcion);
         }
     }
