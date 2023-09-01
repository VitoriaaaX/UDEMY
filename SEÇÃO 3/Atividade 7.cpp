//Temperatura em Fahrenheit convertida em Graus Celsius

#include <stdio.h>
#include <stdlib.h>

main (){
    float f,c;
    printf("\n\nTemperatura em Fahrenheit convertida em Graus Celsius\n\n");
    printf("Digite a temperatura em Fahrenheit: ", f);
    scanf("%f", &f);
    c=5.0*(f-32.0)/9.0;
    printf("A temperatura em Graus Celsius e: %.2f", c);
}
