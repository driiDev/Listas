#include <stdio.h>

int main(){
    
    float x, a, b, c;
    a = 2;
    b = 4;
    c = 6;

    printf("Digite um numero: \n");
    scanf("%f", &x);

    float y = ((a*x) * (a*x)) + (b*x) + c;
    printf("%2.f", y);
    
    return 0;
}
