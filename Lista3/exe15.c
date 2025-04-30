#include <stdio.h>

int main() {
    float preco, total;
    int condicao_pagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Escolha a condicao de pagamento:\n");
    printf("1 - A vista em dinheiro (15%% desconto)\n");
    printf("2 - A vista no cartao de credito (10%% desconto)\n");
    printf("3 - Em duas vezes (sem juros)\n");
    printf("4 - Em tres vezes (10%% juros)\n");
    scanf("%d", &condicao_pagamento);

    switch (condicao_pagamento) {
        case 1:
            total = preco * 0.85;
            break;
        case 2:
            total = preco * 0.90;
            break;
        case 3:
            total = preco;
            break;
        case 4:
            total = preco * 1.10;
            break;
        default:
            printf("Condicao de pagamento invalida!\n");
            return 1;
    }

    printf("Valor a ser pago: R$ %.2f\n", total);

    return 0;
}
