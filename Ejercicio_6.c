#include <stdio.h>

int main() {
    // Declaración de variables
    float sueldo, aumento, sueldo_final;

    // Solicitar el sueldo del trabajador
    printf("Ingresa el sueldo del trabajador: $");
    scanf("%f", &sueldo);

    // Determinar el porcentaje de aumento
    if (sueldo < 1000) {
        aumento = sueldo * 0.15;
    } else {
        aumento = sueldo * 0.12;
    }

    // Calcular el sueldo final
    sueldo_final = sueldo + aumento;

    // Mostrar los resultados
    printf("\nAumento aplicado: $%.2f", aumento);
    printf("\nSueldo final con aumento: $%.2f\n", sueldo_final);

    return 0;
}
