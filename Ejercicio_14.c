#include <stdio.h>

int main() {
    // Declaración de variables
    int numeros[100];
    int n, i, numero_buscar;
    int contador = 0;

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

    // Solicitar el número que se desea buscar
    printf("\nIngresa el numero que deseas buscar: ");
    scanf("%d", &numero_buscar);

    // Contar cuántas veces aparece el número
    for (i = 0; i < n; i++) {
        if (numeros[i] == numero_buscar) {
            contador++;
        }
    }

    // Mostrar el resultado
    printf("\nEl numero %d aparece %d veces en el arreglo.\n",
           numero_buscar, contador);

    return 0;
}
