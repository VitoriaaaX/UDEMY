//Areas em hectares convertido em metros quadrados

#include <stdio.h>
#include <stdlib.h>

main (){
    int m,h;
    printf("\n\nAreas em hectares convertido em metros quadrados\n\n");
    printf("Digite a area em hectares: ", h);
    scanf("%d", &h);
    m=h*10000;
    printf("As Areas em hectares convertido em metros quadrados e: %d", m);
}