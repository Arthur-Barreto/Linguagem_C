#include <stdio.h>
#include <stdlib.h>

int main (){

    /* usuario digita um dado em minutos que será convertido para horas */
    
    int h;
    float min;

    printf("Digite a quantidade de minutos: \n");
    scanf("%i",&h);

    min = (float)(h/60.0);

    printf("Convertendo para horas, temos: %.2f \n",min);

    system("PAUSE");
    return 0; 
}