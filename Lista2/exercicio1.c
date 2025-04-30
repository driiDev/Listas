#include <stdio.h>

int main() {
    int minutos;
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    printf("Tempo em segundos: %d\n", minutos * 60);
    return 0;
}