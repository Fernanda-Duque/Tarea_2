#include <stdio.h>

int main() {
    // Declaración de variables
    float compra, descuento, total_pagar;

    // Solicitar el monto de la compra
    printf("Ingresa el monto de la compra: $");
    scanf("%f", &compra);

    // Verificar si tiene derecho al descuento
    if (compra > 2500) {
        descuento = compra * 0.08;
        total_pagar = compra - descuento;
    } else {
        descuento = 0;
        total_pagar = compra;
    }

    // Mostrar los resultados
    printf("\nDescuento aplicado: $%.2f", descuento);
    printf("\nTotal a pagar: $%.2f\n", total_pagar);

    return 0;
}
