#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("Dobro: %d\n", numero * 2);
    } else {
        printf("Triplo: %d\n", numero * 3);
    }

    return 0;
}
