//Comprimento em polegadas convertido em centimetros

#include <stdio.h>
#include <stdlib.h>

main (){
    float c,p;
    printf("\n\nComprimento em polegadas convertido em centimetros\n\n");
    printf("Digite o comprimento em polegadas: ", p);
    scanf("%f", &p);
    c=p*2.54;
    printf("o Comprimento em polegadas convertido em centimetros e: %f", c);
}