//Angulo em radianos convertido em graus

#include <stdio.h>
#include <stdlib.h>

main (){
    float g,r;
    printf("\n\nAngulo em radianos convertido em graus\n\n");
    printf("Digite o angulo em radianos: ", r);
    scanf("%f", &r);
    g=r*180/3.14;
    printf("o Angulo em radianos convertido em graus e: %f", g);
}