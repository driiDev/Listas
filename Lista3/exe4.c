#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("E divisivel por 3\n");
    } else {
        printf("Nao e divisivel por 3\n");
    }

    return 0;
}
