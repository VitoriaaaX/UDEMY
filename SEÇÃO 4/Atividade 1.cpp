//Receba dois numeros e mostre qual é o maior

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2;
    printf("Digite o primeiro numero: ",n1);
    scanf("%d", &n1);
    printf("Digite o segundo numero: ",n2);
    scanf("%d", &n2);
    if (n1>n2)
    {
        printf("O maior numero e: %d", n1);
    }
    else printf("O maior numero e: %d", n2);
}