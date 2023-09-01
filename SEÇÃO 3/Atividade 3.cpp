// Usuario digitar tres valores inteiros e imprima a soma deles.

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1,n2,n3,total;
    printf("Digite o primeiro numero: ", n1);
    scanf("%d", &n1);
    printf("Digite o primeiro numero: ", n2);
    scanf("%d", &n2);
    printf("Digite o primeiro numero: ", n3);
    scanf("%d", &n3);
    total=n1+n2+n3;
    printf("A soma dos tres numeros e: %d", total);
}
