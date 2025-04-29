/*O preço final de um produto é calculado somando o valor original com o imposto aplicado. O
imposto corresponde a 10% do valor original, e um desconto fixo de R$5,00 é aplicado após a
adição do imposto.*/
#include <stdio.h>

int main(){
    
float precoOriginal, precoFinal;

printf("Digite o valor original do produto: \n");
scanf("%f", &precoOriginal);

precoFinal = (precoOriginal / 10) - 5 + precoOriginal;

printf("Preco final: R$ %.2f.\n", precoFinal);

return 0;
}
