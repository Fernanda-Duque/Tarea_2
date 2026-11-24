#include <stdio.h>

int main() {
    // Declaración de variables
    int N, i;
    long long producto = 1;

    // Solicitar la cantidad de números naturales
    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    // Calcular el producto de los primeros N números naturales
    for (i = 1; i <= N; i++) {
        producto = producto * i;
    }

    // Mostrar el resultado
    printf("\nEl producto de los primeros %d numeros naturales es: %lld\n", N, producto);

    return 0;
}
