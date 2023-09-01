//Areas em metros quadrados convertido em hectares

#include <stdio.h>
#include <stdlib.h>

main (){
    int m,h;
    printf("\n\nAreas em metros quadrados convertido em hectares\n\n");
    printf("Digite a area em metros quadrados: ", m);
    scanf("%d", &m);
    h=m*0.0001;
    printf("As Areas em metros quadrados convertido em hectares e: %d", h);
}