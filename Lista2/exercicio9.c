#include <stdio.h>

int main() {
    float valorCompra;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    float desconto = valorCompra * 0.15;
    printf("Valor com desconto: R$ %.2f\n", valorCompra - desconto);
    return 0;
}