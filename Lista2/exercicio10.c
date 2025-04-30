#include <stdio.h>

int main() {
    int camisetas, calcas, cintos;
    printf("Digite o número de camisetas: ");
    scanf("%d", &camisetas);
    printf("Digite o número de calças: ");
    scanf("%d", &calcas);
    printf("Digite o número de cintos: ");
    scanf("%d", &cintos);
    float totalCompra = camisetas * 25 + calcas * 100 + cintos * 40;
    float desconto10 = totalCompra * 0.10;
    printf("Desconto: R$ %.2f\n", desconto10);
    printf("Valor final com desconto: R$ %.2f\n", totalCompra - desconto10);
    return 0;
}