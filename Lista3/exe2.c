#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A + B < A + C) {
        printf("A + B e menor que A + C\n");
    } else {
        printf("A + B nao e menor que A + C\n");
    }

    return 0;
}
