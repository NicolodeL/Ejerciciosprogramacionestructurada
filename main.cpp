#include <iostream>
#include <string>

int main() {
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    if (estudiante2 == NULL) {
        printf("Error al asignar memoria con malloc.\n");
        return 1;
    }


}
