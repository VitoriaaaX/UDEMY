// calcular a media de 4 notas

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1,n2,n3,n4,total;
    printf("Digite a primeira nota: ", n1);
    scanf("%d", &n1);
    printf("Digite a segunda nota: ", n2);
    scanf("%d", &n2);
    printf("Digite a terceira nota: ", n3);
    scanf("%d", &n3);
    printf("Digite a terceira nota: ", n4);
    scanf("%d", &n4);
    total=n1+n2+n3+n4/4;
    printf("A media das quatro notas e: %d", total);
}
