#include <stdio.h>

int main() {
    int valor, notas_100, notas_50, notas_20, notas_10, notas_5, notas_1;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    notas_100 = valor / 100;
    valor = valor % 100;

    notas_50 = valor / 50;
    valor = valor % 50;

    notas_20 = valor / 20;
    valor = valor % 20;

    notas_10 = valor / 10;
    valor = valor % 10;

    notas_5 = valor / 5;
    valor = valor % 5;

    notas_1 = valor / 1;

    if (notas_100 > 0) printf("%d nota(s) de R$ 100\n", notas_100);
    if (notas_50 > 0) printf("%d nota(s) de R$ 50\n", notas_50);
    if (notas_20 > 0) printf("%d nota(s) de R$ 20\n", notas_20);
    if (notas_10 > 0) printf("%d nota(s) de R$ 10\n", notas_10);
    if (notas_5 > 0) printf("%d nota(s) de R$ 5\n", notas_5);
    if (notas_1 > 0) printf("%d nota(s) de R$ 1\n", notas_1);

    return 0;
}
