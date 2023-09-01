//Temperatura em Graus Celsius convertida em Graus Kelvin

#include <stdio.h>
#include <stdlib.h>

main (){
    float k,c;
    printf("\n\nTemperatura em Graus Celsius convertida em Graus Kelvin\n\n");
    printf("Digite a temperatura em Graus Celsius: ", c);
    scanf("%f", &c);
    k=c+273.15;
    printf("A temperatura em Graus Kelvin e: %.2f", k);
}