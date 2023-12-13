//
// Created by nicol on 13/12/2023.
//
#include <stdio.h>
#include <string.h>

// Definición de la unión
union MiUnion {
    int entero;
    float flotante;
    char cadena[50]; // Supongamos que la cadena tiene una longitud máxima de 50 caracteres
};

int main() {
    // Crear una variable de la unión
    union MiUnion miVariable;

    // Asignar diferentes tipos de valores y ver cómo se comporta
    miVariable.entero = 54;
    printf("Entero: %d\n", miVariable.entero);

    miVariable.flotante = 5.123;
    printf("Flotante: %.2f\n", miVariable.flotante);

    strcpy(miVariable.cadena, "Hola, todo bien?");
    printf("Cadena: %s\n", miVariable.cadena);

    return 0;
}