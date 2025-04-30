#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha, numero_usuario, numero_sorteado;
    srand(time(0));

    printf("Escolha PAR(0) ou IMPAR(1): ");
    scanf("%d", &escolha);
    printf("Digite um numero de 0 a 5: ");
    scanf("%d", &numero_usuario);

    numero_sorteado = rand() % 6;
    printf("Numero sorteado: %d\n", numero_sorteado);

    int soma = numero_usuario + numero_sorteado;
    if ((escolha == 0 && soma % 2 == 0) || (escolha == 1 && soma % 2 != 0)) {
        printf("Voce venceu!\n");
    } else {
        printf("O programa venceu.\n");
    }

    return 0;
}
