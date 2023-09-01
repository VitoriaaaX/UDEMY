//Velocidade em quilometros convertido em milhas

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,m;
    printf("\n\nVelocidade em quilometros convertido em milhas\n\n");
    printf("Digite a velocidade em milhas: ", k);
    scanf("%f", &k);
    m=k/3.6;
    printf("A Velocidade em quilometros convertido em milhas e: %.2f", m);
}