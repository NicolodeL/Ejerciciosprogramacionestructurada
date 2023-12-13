
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

// b. Instanciación de la estructura Estudiante y asignación de valores
 void instanciacionYAsignacion() {
     struct Estudiante estudiante1;
     strcpy(estudiante1.nombre, "Juan");
     estudiante1.edad = 20;
     estudiante1.promedio = 8.5;

     // c. Instanciación con el operador malloc
     struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
     if (estudiante2 == NULL) {
         printf("Error al asignar memoria con malloc.\n");
         return;
     }

     strcpy(estudiante2->nombre, "Maria");
     estudiante2->edad = 22;
     estudiante2->promedio = 7.8;

     // d. Punteros y estructuras
     struct Estudiante *punteroEstudiante;
     punteroEstudiante = &estudiante1;

     // e. Organización de la programación
     // Crear una lista de estudiantes
     struct Estudiante listaEstudiantes[100]; // Supongamos que la lista puede contener hasta 100 estudiantes
     int numEstudiantes = 0;

     // Menú de la aplicación
     int opcion;
     do {
         printf("\n--- Menú ---\n");
         printf("1. Agregar Estudiante\n");
         printf("2. Ver Estudiantes\n");
         printf("3. Eliminar Estudiante\n");
         printf("4. Salir\n");
         printf("Seleccione una opción: ");
         scanf("%d", &opcion);

         switch (opcion) {
             case 1:
                 // Agregar estudiante a la lista
                 if (numEstudiantes < 100) {
                     printf("Ingrese el nombre del estudiante: ");
                     scanf("%s", listaEstudiantes[numEstudiantes].nombre);
                     printf("Ingrese la edad del estudiante: ");
                     scanf("%d", &listaEstudiantes[numEstudiantes].edad);
                     printf("Ingrese el promedio del estudiante: ");
                     scanf("%f", &listaEstudiantes[numEstudiantes].promedio);

                     numEstudiantes++;
                     printf("Estudiante agregado correctamente.\n");
                 } else {
                     printf("La lista está llena. No se pueden agregar más estudiantes.\n");
                 }
                 break;
             case 2:
                 // Ver estudiantes en la lista
                 printf("\n--- Lista de Estudiantes ---\n");
                 for (int i = 0; i < numEstudiantes; i++) {
                     printf("Estudiante %d:\n", i + 1);
                     printf("Nombre: %s\n", listaEstudiantes[i].nombre);
                     printf("Edad: %d\n", listaEstudiantes[i].edad);
                     printf("Promedio: %.2f\n", listaEstudiantes[i].promedio);
                     printf("\n");
                 }
                 break;
             case 3:
                 // Eliminar estudiante de la lista
                 if (numEstudiantes > 0) {
                     int indice;
                     printf("Ingrese el índice del estudiante a eliminar (1-%d): ", numEstudiantes);
                     scanf("%d", &indice);

                     if (indice >= 1 && indice <= numEstudiantes) {
                         // Mover los elementos restantes para llenar el espacio eliminado
                         for (int i = indice - 1; i < numEstudiantes - 1; i++) {
                             listaEstudiantes[i] = listaEstudiantes[i + 1];
                         }
                         numEstudiantes--;
                         printf("Estudiante eliminado correctamente.\n");
                     } else {
                         printf("Índice no válido. Intente de nuevo.\n");
                     }
                 } else {
                     printf("La lista de estudiantes está vacía. No hay estudiantes para eliminar.\n");
                 }
                 break;
             case 4:
                 printf("Saliendo de la aplicación.\n");
                 break;
             default:
                 printf("Opción no válida. Intente de nuevo.\n");
         }
     } while (opcion != 4);

     // Liberar memoria asignada con malloc
     free(estudiante2);
 }