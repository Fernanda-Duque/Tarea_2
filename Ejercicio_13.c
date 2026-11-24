#include <stdio.h>

int main() {
    // Declaración de variables
    int numeros[100];
    int n, i, suma = 0;

    // Solicitar la cantidad de elementos del arreglo
    printf("Ingresa la cantidad de elementos: ");
    scanf("%d", &n);

    // Verificar que la cantidad sea válida
    if (n < 1 || n > 100) {
        printf("Cantidad no valida. Debe ser entre 1 y 100.\n");
        return 0;
    }

    // Leer los elementos del arreglo
    for (i = 0; i < n; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcular la suma de los elementos
    for (i = 0; i < n; i++) {
        suma = suma + numeros[i];
    }

    // Mostrar el resultado
    printf("\nLa suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
