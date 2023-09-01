//Comprimento em jardas convertido em metros

#include <stdio.h>
#include <stdlib.h>

main (){
    int m,j;
    printf("\n\nComprimento em jardas convertido em metros\n\n");
    printf("Digite o comprimento em jardas: ", j);
    scanf("%d", &j);
    m=0.91*j;
    printf("O comprimento em jardas convertido em metros e: %d", m);
}