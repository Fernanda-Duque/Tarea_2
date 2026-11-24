#include <stdio.h>

int main() {
    // Declaración de variables
    float radio, area, circunferencia;
    const float PI = 3.1416;

    // Solicitar el radio del círculo
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    // Calcular el área y la circunferencia
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Mostrar los resultados
    printf("\nEl area del circulo es: %.2f", area);
    printf("\nLa circunferencia del circulo es: %.2f\n", circunferencia);

    return 0;
}
