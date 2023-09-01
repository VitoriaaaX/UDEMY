//Velocidade em m/s convertida em km/h

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,m;
    printf("\n\nVelocidade em m/s convertida em km/h\n\n");
    printf("Digite a velocidade em m/s: ", m);
    scanf("%f", &m);
    k=m*3.6;
    printf("A velocidade em m/s convertida em km/h e: %.2f", k);
}