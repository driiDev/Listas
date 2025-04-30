#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("E par\n");
    } else {
        printf("E impar\n");
    }

    return 0;
}
