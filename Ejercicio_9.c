#include <stdio.h>

int main() {
    // Declaración de variables
    int N, i, resultado;

    // Solicitar un número entero
    printf("Ingresa un numero entero: ");
    scanf("%d", &N);

    // Generar la tabla de multiplicar desde el 1 hasta el 10
    printf("\nTabla de multiplicar del %d:\n", N);

    for (i = 1; i <= 10; i++) {
        resultado = N * i;
        printf("%d x %d = %d\n", N, i, resultado);
    }

    return 0;
}
