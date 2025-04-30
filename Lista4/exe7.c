#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50], primeiro[50];

    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", nomes[i]);
    }

    strcpy(primeiro, nomes[0]);
    for (int i = 1; i < 5; i++) {
        if (strcmp(nomes[i], primeiro) < 0) {
            strcpy(primeiro, nomes[i]);
        }
    }

    printf("Primeiro nome em ordem alfabetica: %s\n", primeiro);
    return 0;
}