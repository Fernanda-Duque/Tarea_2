#include <stdio.h>

int main() {
    // Declaración de variables
    float inversion, tasa_interes, interes, monto_final;

    // Solicitar la cantidad invertida
    printf("Ingresa la cantidad de dinero invertida: ");
    scanf("%f", &inversion);

    // Solicitar la tasa de interés mensual
    printf("Ingresa la tasa de interes mensual (%%): ");
    scanf("%f", &tasa_interes);

    // Calcular el interés obtenido durante un mes
    interes = inversion * (tasa_interes / 100);

    // Calcular el monto final
    monto_final = inversion + interes;

    // Mostrar los resultados
    printf("\nEl interes obtenido es: $%.2f", interes);
    printf("\nEl monto final despues de un mes es: $%.2f\n", monto_final);

    return 0;
}
