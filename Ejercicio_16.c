#include <stdio.h>

int main() {
    // Declaración de variables
    int pares[100];
    int i;

    // Almacenar los primeros 100 números pares
    for (i = 0; i < 100; i++) {
        pares[i] = (i + 1) * 2;
    }

    // Imprimir los elementos del arreglo
    printf("Los primeros 100 numeros pares son:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", pares[i]);

        // Imprimir 10 números por línea
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
