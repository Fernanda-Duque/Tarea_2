#include <stdio.h>

int main() {
    // Declaración de variables
    int numeros[100];
    int n, i;
    int positivos = 0, negativos = 0, nulos = 0;

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

    // Clasificar los elementos del arreglo
    for (i = 0; i < n; i++) {
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Numeros positivos: %d\n", positivos);
    printf("Numeros negativos: %d\n", negativos);
    printf("Numeros nulos: %d\n", nulos);

    return 0;
}
