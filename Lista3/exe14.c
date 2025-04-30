#include <stdio.h>

int main() {
    int idade_dependente, total;
    char tem_dependente;

    printf("Digite a idade do conveniado: ");
    scanf("%d", &total);

    total = 300; // valor fixo do convenio

    printf("O conveniado tem dependente(s)? (s/n): ");
    scanf(" %c", &tem_dependente);

    if (tem_dependente == 's') {
        printf("Digite a idade do dependente: ");
        scanf("%d", &idade_dependente);

        if (idade_dependente < 10) {
            total += 100;
        } else if (idade_dependente <= 30) {
            total += 220;
        } else if (idade_dependente <= 60) {
            total += 395;
        } else {
            total += 480;
        }
    }

    printf("Valor a ser pago: R$ %d\n", total);

    return 0;
}
