//Temperatura em Graus Kelvin convertida em Graus Celsius

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,c;
    printf("\n\nTemperatura em Graus Kelvin convertida em Graus Celsius\n\n");
    printf("Digite a temperatura em Graus Kelvin: ", k);
    scanf("%f", &k);
    c=k-273.15;
    printf("A temperatura em Graus Celsius e: %.2f", c);
}