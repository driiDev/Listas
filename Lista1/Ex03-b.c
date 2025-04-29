/* Um posto de gasolina precisa de um programa que calcule o valor a ser pago por um cliente. O
cliente informa quantos litros abasteceu e o preço por litro. O programa deve calcular e exibir
o valor total da compra.*/

#include <stdio.h>

int main(){

    float litros, precoLitro;

    printf("Quantos litros abasteceu? \n");
    scanf("%f", &litros); // entrada de dados

    printf("Digite o preco do litro: \n");
    scanf("%f", &precoLitro); // entrada de dados

    double valorTotal = litros * precoLitro; // processamento
    //%.2f
    printf("Valor total: R$ %.2f.\n", valorTotal); // saída de dados

    return 0;
}