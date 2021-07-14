#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* defininfo constantes */

#define pi 3.141592653589793

/* Protótipo das funções */
void info(float r, float c, char l);

int main (){

    /* habilitando caracteres da lingua portuguesa */
    setlocale (LC_ALL,"Portuguese_Brazil");

    /* pedindo as informações do usuário */
    float r,c;
    char l;

    printf("Informe o valor da resistência em ohms: ");
    scanf("%f",&r);
    printf("Informe o valor da capacitância em Faraday: ");
    scanf("%f",&c);
    printf("Digite A para calcular a ferquencia ou digite B para calcular a constante de tempo ");
    scanf(" %c",&l);

    info(r,c,l);

    system("PAUSE");
    return 0;

} /* end main */

/* Desenvolvimento das funções */

void info(float r, float c, char l){

    /* verificando o caso para 'A' e 'B' */

    float f;

    switch (l)
    {
    case 'A':

        f = 1/(2*pi*r*c);
        printf("O valor da frequência é: %.2f Hz \n",f);
        break;
    case 'B':

        f = r*c;
        printf("O valor da constante de tempo é: %.2f s \n",f);
        break;

    default:
        printf("ERROR \n");
        break;
    
    } /* end switch */

} /* end info */
