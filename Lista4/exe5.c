#include <stdio.h>

int main() {
    int x;
    float media_geral = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        float grauA, grauB, media;
        printf("\nAluno %d:\n", i);
        printf("Grau A: ");
        scanf("%f", &grauA);
        printf("Grau B: ");
        scanf("%f", &grauB);

        media = (grauA + grauB) / 2;
        if (media >= 6.0) {
            printf("APROVADO\n");
        } else {
            float grauC;
            char substituir;
            printf("Grau C: ");
            scanf("%f", &grauC);
            printf("Substituir (A/B)? ");
            scanf(" %c", &substituir);

            if (substituir == 'A' || substituir == 'a') grauA = grauC;
            else grauB = grauC;

            media = (grauA + grauB) / 2;
            printf(media >= 6.0 ? "APROVADO\n" : "REPROVADO\n");
        }
        media_geral += media;
    }

    printf("\nMedia geral da turma: %.2f\n", media_geral / x);
    return 0;
}