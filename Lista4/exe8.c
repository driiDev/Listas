#include <stdio.h>

int main() {
    char opcao;
    do {
        int num, fatorial = 1;
        printf("Entre com um numero: ");
        scanf("%d", &num);

        for (int i = num; i >= 1; i--) {
            fatorial *= i;
        }
        printf("O fatorial de %d e %d\n", num, fatorial);

        printf("Calcular outro numero (s/n)? ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    return 0;
}