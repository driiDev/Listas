#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if (num2 != 0) {
        printf("Resultado da divisao: %.2f\n", num1 / num2);
    } else {
        printf("Erro: divisao por zero!\n");
    }

    return 0;
}
