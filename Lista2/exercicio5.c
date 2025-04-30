#include <stdio.h>

int main() {
    float precoLitro, valorDisponivel;
    printf("Digite o preco do litro da gasolina: ");
    scanf("%f", &precoLitro);
    printf("Digite o valor disponivel para abastecer: ");
    scanf("%f", &valorDisponivel);
    printf("Litros abastecidos: %.2f\n", valorDisponivel / precoLitro);
    return 0;
}