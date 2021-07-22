#include <stdio.h>
#include <stdlib.h>

/* Constantes do sistema */
#define qtd 6

/* Protótipo de funções */
int cript(int info[qtd], int i);

int main(){

    int info[qtd] = {},
        trad[qtd] = {};

    for (int i = 0; i < qtd; i++){

        printf("Digite o bite %d do vetor, em hexadecimal: ",i+1);
        scanf(" %x",&info[i]);

    } /* end for */

    for (int j = 0; j < qtd; j++){

        trad[j] = cript(info[j],j);
        printf("O valor convertido eh: %x \n",trad[j]);

    } /* end for */

    system("PAUSE");
    return 0;

}/* end main */

/* Desenvolvilmento das funções */

int cript(int info[qtd], int i){

    /* resto da divisão por 2 de info[i] será 1 para casos ímpares
    do contrário, nulo */

    if (info[i]%2)
        info[i] -= 3;
    else
        info[i] += 5;

    return info[i];
} /* end cript */