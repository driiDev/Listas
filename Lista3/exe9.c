#include <stdio.h>

int main() {
    float cotacao_real, cotacao_dolar, cotacao_euro, valor;
    int opcao;

    printf("Digite a cotacao do Real para Euro, Dolar: ");
    scanf("%f %f", &cotacao_euro, &cotacao_dolar);
    printf("Digite a cotacao do Dolar para Real: ");
    scanf("%f", &cotacao_real);

    printf("Escolha a opcao:\n");
    printf("1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dolar\n");
    printf("3) Converter de Euro para Dolar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dolar para Euro\n");
    printf("6) Converter de Dolar para Real\n");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
            printf("Valor em Euro: %.2f\n", valor / cotacao_euro);
            break;
        case 2:
            printf("Valor em Dolar: %.2f\n", valor / cotacao_dolar);
            break;
        case 3:
            printf("Valor em Dolar: %.2f\n", valor * cotacao_dolar);
            break;
        case 4:
            printf("Valor em Real: %.2f\n", valor * cotacao_euro);
            break;
        case 5:
            printf("Valor em Euro: %.2f\n", valor * cotacao_euro);
            break;
        case 6:
            printf("Valor em Real: %.2f\n", valor * cotacao_real);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
