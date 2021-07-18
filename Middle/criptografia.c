#include <stdio.h>
#include <stdlib.h>

/* Constantes do sistema */
#define qtd 6

/* Protótipo de funções */
int cript(int info[], int N);

int main(){

    int info[qtd] = {};

    for (int i = 0; i < qtd; i++){

        printf("Digite o bite %d do vetor, em hexadecimal: ",i+1);
        scanf(" %x",&info[i]);

    } /* end for */

    info = cript(info,qtd);

    system("PAUSE");
    return 0;

}/* end main */

/* Desenvolvilmento das funções */

int cript(int info[], int N){

    for (int i = 0; i < N; i++){

        /* resto da divisão por 2 de info[i] será 1 para casos ímpares
        do contrário, nulo */

        if (info[i]%2)
            info[i] -= 3;
        else
            info[i] += 5;

    } /* end for */

    return info;
} /* end cript */