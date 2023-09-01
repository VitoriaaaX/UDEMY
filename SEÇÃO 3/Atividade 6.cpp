//Temperatura em Graus Celsius convertida em Fahrenheit

#include <stdio.h>
#include <stdlib.h>

main (){
    float c,f;
    printf("\n\nTemperatura em Graus Celsius convertida em Fahrenheit\n\n");
    printf("Digite a temperatura em Graus Celsius: ", c);
    scanf("%f", &c);
    f=c*(9.5/5.0)+32.0;
    printf("A temperatura em Fahrenheit e: %.2f", f);
}
