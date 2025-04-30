#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int faces, resultado;
    printf("Digite o numero de faces do dado (4, 6, 8, 10, 12 ou 16): ");
    scanf("%d", &faces);

    if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16) {
        srand(time(0));
        resultado = rand() % faces + 1;
        printf("Resultado do dado: %d\n", resultado);
    } else {
        printf("Numero de faces invalido!\n");
    }

    return 0;
}
