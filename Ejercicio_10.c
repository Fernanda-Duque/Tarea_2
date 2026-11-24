#include <stdio.h>

int main() {
    // Declaración de variables
    int numero, i;
    int positivos = 0, negativos = 0, nulos = 0;

    // Leer los 100 números
    for (i = 1; i <= 100; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &numero);

        // Clasificar cada número
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
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
