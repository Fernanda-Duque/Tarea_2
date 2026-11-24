#include <stdio.h>

int main() {
    // Declaración de variables
    int i, suma = 0;

    // Recorrer los números pares del 10 al 50
    for (i = 10; i <= 50; i += 2) {
        suma = suma + i;
    }

    // Mostrar el resultado
    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
