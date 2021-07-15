/*

um processador tem um conversor AD de 10 bits, portanto o range
vai de 0 a 1023. Implemente uma função que receba um  valor de 0
a 1023 e retorne um valor linearmente proporcional a 8 bists,
isto é de 0 a 255.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Protótipo de funções */
float conv(float info);

int main(){

    /* habilitando caracteres da lingua portuguesa */
    setlocale (LC_ALL,"Portuguese_Brazil");

    int info = 0;
    float resp;

    while (1){

        printf("Digite um valor de 0 a 1023 para ser convertido: ");
        scanf(" %d",&info);

        if ((info < 0) || (info > 1023))
            break;

        else{

            resp = conv(info);
            printf("%.0f \n",resp);

        } /* end else */
    } /* end while */

    system("PAUSE");
    return 0;
} /* end main */

/* Desenvovimento de funções */

float conv(float info){

    info *= (255.0/1023.0);

    return info;

} /* end conv */