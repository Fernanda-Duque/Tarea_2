#include <stdio.h>

int main() {
    // Declaración de variables
    int num1, num2;

    // Solicitar los dos números enteros
    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    // Verificar si alguno de los números es cero
    if (num1 == 0 && num2 == 0) {
        printf("\nNo se puede determinar el divisor.\n");
    } else if (num1 == 0) {
        printf("\nEl cero no puede ser divisor de otro numero.\n");
    } else if (num2 == 0) {
        printf("\nEl cero es divisible entre cualquier numero distinto de cero.\n");
    } else if (num1 % num2 == 0) {
        printf("\n%d es divisor de %d.\n", num2, num1);
    } else if (num2 % num1 == 0) {
        printf("\n%d es divisor de %d.\n", num1, num2);
    } else {
        printf("\nNinguno de los dos numeros es divisor del otro.\n");
    }

    return 0;
}
