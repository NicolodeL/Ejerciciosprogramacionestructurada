#include "estudiante.h"
#include <iostream>
#include <cstring>
#include <string>
struct Estudiante copiarEstudiante(const struct Estudiante *original) {
    struct Estudiante copia;

    // Copiar cada miembro de la estructura original a la copia
    strcpy(copia.nombre, original->nombre);
    copia.edad = original->edad;
    copia.promedio = original->promedio;

    return copia;
}
void imprimirEstudiantePorValor(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    }

int main() {
    // b. Instanciación de la estructura Estudiante y asignación de valores
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // c. Instanciación con el operador malloc
    struct Estudiante *estudiante2 = crearEstudiante("Maria", 22, 7.8);

    // d. Punteros y estructuras
    struct Estudiante *punteroEstudiante = &estudiante1;

    // e. Organización de la programación
    // Crear una lista de estudiantes
    struct Estudiante listaEstudiantes[100];
    int numEstudiantes = 0;
    typedef struct Estudiante EstudianteAlias;
    // Menú de la aplicación
    int opcion;
    do {
        std::cout << "\n--- Menú ---\n";
        std::cout << "1. Agregar Estudiante\n";
        std::cout << "2. Ver Estudiantes\n";
        std::cout << "3. Eliminar Estudiante\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Agregar estudiante a la lista
                if (numEstudiantes < 100) {
                    std::cout << "Ingrese el nombre del estudiante: ";
                    std::cin >> listaEstudiantes[numEstudiantes].nombre;
                    std::cout << "Ingrese la edad del estudiante: ";
                    std::cin >> listaEstudiantes[numEstudiantes].edad;
                    std::cout << "Ingrese el promedio del estudiante: ";
                    std::cin >> listaEstudiantes[numEstudiantes].promedio;

                    numEstudiantes++;
                    std::cout << "Estudiante agregado correctamente.\n";
                } else {
                    std::cout << "La lista está llena. No se pueden agregar más estudiantes.\n";
                }
                break;
            case 2:
                // Ver estudiantes en la lista
                std::cout << "\n--- Lista de Estudiantes ---\n";
                for (int i = 0; i < numEstudiantes; i++) {
                    std::cout << "Estudiante " << i + 1 << ":\n";
                    std::cout << "Nombre: " << listaEstudiantes[i].nombre << "\n";
                    std::cout << "Edad: " << listaEstudiantes[i].edad << "\n";
                    std::cout << "Promedio: " << listaEstudiantes[i].promedio << "\n\n";
                }
                break;
            case 3:
                // Eliminar estudiante de la lista
                if (numEstudiantes > 0) {
                    int indice;
                    std::cout << "Ingrese el índice del estudiante a eliminar (1-" << numEstudiantes << "): ";
                    std::cin >> indice;

                    if (indice >= 1 && indice <= numEstudiantes) {
                        // Mover los elementos restantes para llenar el espacio eliminado
                        for (int i = indice - 1; i < numEstudiantes - 1; i++) {
                            listaEstudiantes[i] = listaEstudiantes[i + 1];
                        }
                        numEstudiantes--;
                        std::cout << "Estudiante eliminado correctamente.\n";
                    } else {
                        std::cout << "Índice no válido. Intente de nuevo.\n";
                    }
                } else {
                    std::cout << "La lista de estudiantes está vacía. No hay estudiantes para eliminar.\n";
                }
                break;
            case 4:
                std::cout << "Saliendo de la aplicación.\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    // Liberar memoria asignada con malloc

    struct Estudiante copiaEstudiante1 = copiarEstudiante(&estudiante1);

    // Mostrar los datos originales y la copia
    printf("Datos originales:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n\n", estudiante1.promedio);

    printf("Copia de los datos:\n");
    printf("Nombre: %s\n", copiaEstudiante1.nombre);
    printf("Edad: %d\n", copiaEstudiante1.edad);
    printf("Promedio: %.2f\n", copiaEstudiante1.promedio);

    liberarEstudiante(estudiante2);


    imprimirEstudiantePorValor(estudiante1);

    return 0;
}