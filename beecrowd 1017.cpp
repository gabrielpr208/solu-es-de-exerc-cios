#include <stdio.h>
 
int main() {
    float tempo, velocidade, litros;
    scanf("%f %f", &tempo, &velocidade);
    litros=tempo*velocidade/12;
    printf("%.3f\n", litros);
    return 0;
}
