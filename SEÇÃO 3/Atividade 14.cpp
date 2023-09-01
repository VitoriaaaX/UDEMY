//Angulo em graus convertido em radianos

#include <stdio.h>
#include <stdlib.h>

main (){
    float g,r;
    printf("\n\nAngulo em graus convertido em radianos\n\n");
    printf("Digite o angulo em graus: ", g);
    scanf("%f", &g);
    r=g*3.14/180;
    printf("o Angulo em graus convertido em radianos e: %f", r);
}