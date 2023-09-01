//Areas em acres convertido em metros quadrados

#include <stdio.h>
#include <stdlib.h>

main (){
    int m,a;
    printf("\n\nAreas em acres convertido em metros quadrados\n\n");
    printf("Digite a area em acres: ", a);
    scanf("%d", &a);
    m=a*4048.58;
    printf("As Areas em acres convertido em metros quadrados e: %d", m);
}