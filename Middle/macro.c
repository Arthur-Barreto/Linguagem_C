#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Macros do sistema */

#define pond(a,p1,b,p2,c,p3)    (((a*p1) + (b*p2) + (c*p3))/(p1 + p2 + p3)) 

int main(){

    /* habilitando caracteres da lingua portuguesa */
    setlocale (LC_ALL,"Portuguese_Brazil");

    float a,b,c,p1,p2,p3;

    printf("Digite a 1ª nota: ");
    scanf(" %f",&a);

    printf("Digite a 2ª nota: ");
    scanf(" %f",&b);
    
    printf("Digite a 1ª nota: ");
    scanf(" %f",&c);

    printf("Digite o peso 1: ");
    scanf(" %f",&p1);
    
    printf("Digite o peso 2: ");
    scanf(" %f",&p2);
    
    printf("Digite o peso 3: ");
    scanf(" %f",&p3);

    printf("A média ponderada é: %.2f", pond(a,p1,b,p2,c,p3));

} /* end main */