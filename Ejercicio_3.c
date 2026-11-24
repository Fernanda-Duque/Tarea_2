#include <stdio.h>

int main() {
    // Declaración de variables
    float dolares, pesos;
    const float TIPO_CAMBIO = 11.96;

    // Solicitar la cantidad en dólares
    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dolares);

    // Convertir dólares a pesos
    pesos = dolares * TIPO_CAMBIO;

    // Mostrar el resultado
    printf("\nLa cantidad en pesos es: %.2f\n", pesos);

    return 0;
}
