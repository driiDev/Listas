#include <stdio.h>

int main() {
    float grau_a, grau_b, grau_c, media;

    printf("Digite a nota do Grau A: ");
    scanf("%f", &grau_a);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &grau_b);

    media = (grau_a * 1/3) + (grau_b * 2/3);
    printf("Media final: %.2f\n", media);

    if (media >= 6) {
        printf("Aprovado!\n");
    } else {
        printf("Recuperacao. Digite a nota do Grau C: ");
        scanf("%f", &grau_c);
        printf("Escolha o grau a substituir (a ou b): ");
        char grau_substituir;
        scanf(" %c", &grau_substituir);

        if (grau_substituir == 'a') {
            media = (grau_c * 1/3) + (grau_b * 2/3);
        } else if (grau_substituir == 'b') {
            media = (grau_a * 1/3) + (grau_c * 2/3);
        }

        printf("Nova media: %.2f\n", media);

        if (media >= 6) {
            printf("Aprovado!\n");
        } else {
            printf("Reprovado.\n");
        }
    }

    return 0;
}
