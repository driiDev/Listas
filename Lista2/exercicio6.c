#include <stdio.h>

int main() {
    int smartphones, tablets;
    printf("Digite a quantidade de smartphones vendidos: ");
    scanf("%d", &smartphones);
    printf("Digite a quantidade de tablets vendidos: ");
    scanf("%d", &tablets);
    int total = smartphones * 1000 + tablets * 1500;
    printf("Total arrecadado: R$ %d\n", total);
    return 0;
}