//Distancia em milhas convertida em quilometros

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,m;
    printf("\n\nDistancia em milhas convertida em quilometros\n\n");
    printf("Digite a distancia em milhas: ", m);
    scanf("%f", &m);
    k=1.61*m;
    printf("A distancia em milhas convertida em quilometros e: %.2f", k);
}