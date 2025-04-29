#include <stdio.h>

int main(){
    
float n1, n2, n3;
float p1, p2, p3;

printf("Digite 3 notas: \n");
scanf("%f %f %f", &n1, &n2, &n3);

printf("Digite o peso de cada nota: \n");
scanf("%f %f %f", &p1, &p2, &p3);

float mediaPonderada = ((n1 * p1) + (n2*p2) + (n3*p3)) / (p1 + p2 + p3);

printf("Media ponderada: %.2f.\n", mediaPonderada);

return 0;
}
