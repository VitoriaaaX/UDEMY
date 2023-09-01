//Volume em metros cubicos convertido em litros

#include <stdio.h>
#include <stdlib.h>

main (){
    int l,m;
    printf("\n\nVolume em metros cubicos convertido em litros\n\n");
    printf("Digite o volume em metros cubicos: ", m);
    scanf("%d", &m);
    l=1000*m;
    printf("o Volume em metros cubicos convertido em litros e: %d", l);
}