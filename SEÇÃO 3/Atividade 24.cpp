//Areas em metros quadrados convertido em acres

#include <stdio.h>
#include <stdlib.h>

main (){
    int m,a;
    printf("\n\nAreas em metros quadrados convertido em acres\n\n");
    printf("Digite a area em metros: ", m);
    scanf("%d", &m);
    a=m*0.000247;
    printf("As Areas em metros quadrados convertido em acres e: %d", a);
}