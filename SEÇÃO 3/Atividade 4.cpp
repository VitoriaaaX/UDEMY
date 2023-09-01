#include <stdio.h>
#include <stdlib.h>

double pot(double base, int expoente){
int i;
double a=base;
int b=expoente;
double resposta = 1.0;
printf("Calculando %lf elevado a %d\n", a,b);

i=0;
while (i<b){
   resposta=resposta*a;
   i++;
}
printf("\n");
return resposta;
}

int main(){
printf("Resultado: %lf\n", pot(2,8));
return 0;
}  