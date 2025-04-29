#include <stdio.h>

int main(){
    
    float tempo1 = 2; // h
    float tempo2 = 3; // h
    float velocidade1 = 12; //km/h
    float velocidade2 = 18; //km/h

    float distanciaTotal = (tempo1*velocidade1) + (tempo2*velocidade2);

    printf("Distancia total percorrida: %.2f.\n", distanciaTotal);

    return 0;
}
