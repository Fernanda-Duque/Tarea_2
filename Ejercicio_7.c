#include <stdio.h>

int main() {
    // Declaración de variables
    float distancia, distancia_total;
    float precio, descuento, total_pagar;
    int dias_estancia;

    // Solicitar los datos del viaje
    printf("Ingresa la distancia de ida en km: ");
    scanf("%f", &distancia);

    printf("Ingresa el numero de dias de estancia: ");
    scanf("%d", &dias_estancia);

    // Calcular la distancia total (ida y vuelta)
    distancia_total = distancia * 2;

    // Calcular el precio del boleto
    precio = distancia_total * 0.23;

    // Verificar si cumple las condiciones para el descuento
    if (dias_estancia > 7 && distancia_total > 800) {
        descuento = precio * 0.30;
    } else {
        descuento = 0;
    }

    // Calcular el total a pagar
    total_pagar = precio - descuento;

    // Mostrar los resultados
    printf("\nDistancia total: %.2f km", distancia_total);
    printf("\nPrecio del boleto: $%.2f", precio);
    printf("\nDescuento aplicado: $%.2f", descuento);
    printf("\nTotal a pagar: $%.2f\n", total_pagar);

    return 0;
}
