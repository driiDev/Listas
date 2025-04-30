#include <stdio.h>

int main() {
    float cotacao, dolares;
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("Digite a quantidade de dolares que deseja comprar: ");
    scanf("%f", &dolares);
    printf("Total em reais: R$ %.2f\n", cotacao * dolares);
    return 0;
}