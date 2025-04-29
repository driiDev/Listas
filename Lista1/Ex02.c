#include <stdio.h>


int main(){

    int anoAtual = 2025;
    int anoNasc;

    printf("Digite o seu ano de nascimento: \n");
    scanf("%d", &anoNasc); // entrada de dados

    int idade = anoAtual - anoNasc; // processamento
    printf("Sua idade e: %d.\n", idade); // saída de dados

    return 0;
}
