#include <stdio.h>

int main() {
    int num;
    char opcao;

    do {
        printf("Entre com um numero (1 a 9): ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Calcular outro numero (s/n)? ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    return 0;
}