//Leia um numero real e o imprima.

#include <stdio.h>
#include <stdlib.h>

main (){
    float numero;
    printf("Digite um numero: ", numero);
    scanf("%f", &numero);
    printf("Voce digitou o numero: %.2f", numero);
}