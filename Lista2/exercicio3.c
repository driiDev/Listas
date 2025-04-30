#include <stdio.h>

int main() {
    float peso;
    printf("Digite o peso do prato (em kg): ");
    scanf("%f", &peso);
    printf("Valor a pagar: R$ %.2f\n", peso * 40.0);
    return 0;
}