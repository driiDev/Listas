#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero_sorteado = rand() % 10 + 1;
    int tentativa, chances = 3;

    printf("Tente adivinhar o numero (1 a 10). Voce tem 3 tentativas:\n");

    for (int i = 1; i <= chances; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numero_sorteado) {
            printf("Parabens! Voce acertou.\n");
            return 0;
        } else if (tentativa < numero_sorteado) {
            printf("O numero e maior.\n");
        } else {
            printf("O numero e menor.\n");
        }
    }

    printf("Voce perdeu. O numero era: %d\n", numero_sorteado);
    return 0;
}