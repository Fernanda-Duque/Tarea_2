#include <stdio.h>

int main() {
    // Declaración de variables
    float num1, num2;
    float suma, resta, multiplicacion;

    // Solicitar los dos números al usuario
    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    // Realizar las operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Mostrar los resultados
    printf("\nLa suma es: %.2f", suma);
    printf("\nLa resta es: %.2f", resta);
    printf("\nLa multiplicacion es: %.2f\n", multiplicacion);

    return 0;
}
