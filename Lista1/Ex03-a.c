/* Uma empresa deseja criar um sistema que calcula o salário final de um funcionário. O sistema
precisa receber o valor do salário base e o percentual de bônus aplicado. O programa deve
calcular e exibir o valor final do salário com o bônus incluído.*/

#include <stdio.h>

int main(){

    float salarioBase, bonus;

    printf("Digite o seu salario: \n");
    scanf("%f", &salarioBase); // entrada de dados

    printf("Digite o percentual de bonus: \n");
    scanf("%f", &bonus); // entrada de dados

    double salarioFinal = (salarioBase / bonus) + salarioBase; // processamento
    //%.2f
    printf("Salario Final: %.2f.\n", salarioFinal); // saída de dados

    return 0;
}