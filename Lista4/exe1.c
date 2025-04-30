#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1a: Numeros de 0 a 100
    printf("1a) Numeros de 0 a 100:\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 1b: Pares entre 20 e 50
    printf("1b) Pares entre 20 e 50:\n");
    for (int i = 20; i <= 50; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 1c: Numeros de 25 a 70 em ordem decrescente
    printf("1c) Numeros de 25 a 70 (decrescente):\n");
    for (int i = 70; i >= 25; i--) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 1d: Impares de 25 a 95 em ordem decrescente
    printf("1d) Impares de 25 a 95 (decrescente):\n");
    for (int i = 95; i >= 25; i--) {
        if (i % 2 != 0) printf("%d ", i);
    }
    printf("\n\n");

    // 1e: Soma e media de 15 numeros lidos
    printf("1e) Soma e media de 15 numeros:\n");
    int soma = 0;
    float media;
    for (int i = 1; i <= 15; i++) {
        int num;
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);
        soma += num;
    }
    media = (float)soma / 15;
    printf("Soma: %d\nMedia: %.2f\n\n", soma, media);

    // 1f: Quantidade de pares e impares (10 numeros)
    printf("1f) Pares e impares (10 numeros):\n");
    int pares = 0, impares = 0;
    for (int i = 1; i <= 10; i++) {
        int num;
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n\n", pares, impares);

    // 1g: Sortear 20 numeros entre -10 e 10 e classificar
    printf("1g) Sorteio de 20 numeros (-10 a 10):\n");
    srand(time(NULL));
    int positivos = 0, negativos = 0;
    for (int i = 1; i <= 20; i++) {
        int num = rand() % 21 - 10; // Gera de -10 a 10
        printf("%d ", num);
        if (num > 0) {
            printf("(POSITIVO)\n");
            positivos++;
        } else if (num < 0) {
            printf("(NEGATIVO)\n");
            negativos++;
        } else {
            printf("(NULO)\n");
        }
    }
    printf("Positivos: %d\nNegativos: %d\n\n", positivos, negativos);

    // 1h: Soma de N numeros lidos
    printf("1h) Soma de N numeros:\n");
    int n, total = 0;
    printf("Digite N (quantidade de numeros): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int num;
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);
        total += num;
    }
    printf("Soma: %d\n", total);

    return 0;
}