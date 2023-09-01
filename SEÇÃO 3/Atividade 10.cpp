//Velocidade em km/h convertida em m/s

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,m;
    printf("\n\nVelocidade em km/h convertida em m/s\n\n");
    printf("Digite a velocidade em km/h: ", k);
    scanf("%f", &k);
    m=k/3.6;
    printf("A Velocidade em km/h convertida em m/s e: %.2f", m);
}