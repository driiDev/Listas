/* Um consultório médico deseja registrar informações básicas dos pacientes para futuras
consultas. O sistema precisa armazenar os seguintes dados de cada paciente, para
acompanhamento ao longo do tempo: sexo (M ou F), dia, mês e ano de nascimento, altura
(em metros) e peso (em kg).*/

#include <stdio.h>

int main(){

    char sexo;
    int diaNasc, mesNasc, anoNasc;
    float altura;
    float peso;

    printf("Digite seu sexo: M ou F \n");
    scanf("%c", &sexo); // entrada de dados

    printf("Digite o dia do seu nascimento: \n");
    scanf("%i", &diaNasc); // entrada de dados

    printf("Digite o mes do seu nascimento: \n");
    scanf("%i", &mesNasc); // entrada de dados

    printf("Digite o ano do seu nascimento: \n");
    scanf("%i", &anoNasc); // entrada de dados

    printf("Digite a sua altura: (metros) \n");
    scanf("%f", &altura); // entrada de dados

    printf("Digite o seu peso: (kg) \n");
    scanf("%f", &peso); // entrada de dados

    printf("Sexo: %c | Nascimento: %i/%i/%i | Altura: %.f metros | Peso: %.2f\n", sexo, diaNasc, mesNasc, anoNasc, altura, peso);
    return 0;
}