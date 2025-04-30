#include <stdio.h>

int main() {
    int passaros;
    printf("Digite a quantidade de passaros: ");
    scanf("%d", &passaros);
    printf("Total de racao por dia (em gramas): %d\n", passaros * 30);
    return 0;
}