#include <stdio.h>
#include <stdlib.h>

int main (){

    float temp;
    printf("Digite um temperatura em graus Celsius: ");
    scanf("%f",&temp);
    temp = (1.8*temp) + 32 ;
    printf("O valor da temperatura em Fahrenheit eh: %f",temp);

} /* end main */