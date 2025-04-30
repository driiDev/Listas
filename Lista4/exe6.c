#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeros[5], menor = 100, maior = 0, soma = 0;

    printf("Numeros sorteados: ");
    for (int i = 0; i < 5; i++) {
        numeros[i] = rand() % 101;
        printf("%d ", numeros[i]);
        if (numeros[i] < menor) menor = numeros[i];
        if (numeros[i] > maior) maior = numeros[i];
        soma += numeros[i];
    }

    printf("\nMenor: %d\nMaior: %d\nMedia: %.2f\n", menor, maior, (float)soma / 5);
    return 0;
}