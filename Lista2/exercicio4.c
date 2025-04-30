#include <stdio.h>

int main() {
    float grauA, grauB;
    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);
    float media = (grauA * 1 + grauB * 2) / 3;
    printf("Media final: %.2f\n", media);
    return 0;
}