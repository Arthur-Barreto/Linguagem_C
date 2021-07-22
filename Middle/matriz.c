#include <stdio.h>
#include <stdlib.h>

/* macros do sistema */

#define l 4
#define c 6

/* protipo de funções */

void atualiza();

int main(){

    /* criando a matriz de inteiros */

    while(1){

    system("cls");

    atualiza();

    break;

    } /* end while */

    system("PAUSE");
    return 0;

} /* end main */

/* desenvolvimento de funções */

void atualiza(){

    int mat[l][c] = {};

    for (int i = 0; i<l; i++){
        /* a cada linha adiciona o separador, com 28 "_" */
        printf("-------------------------\n");

        for (int j = 0; j<c; j++){

            /* se for a ultima coluna precisamos colocar dois separadores */

            if(j==(c-1))
                printf("| %d |", mat[i][j]);
            else
                printf("| %d ", mat[i][j]);
            
        } /* end for coluna */

        /* inserindo quebra de linha, sem esta não tem como imprimir a linha separatoria */
        printf("\n");

        /* adocionando a última linha de "-" */
        if(i == (l-1))
            printf("-------------------------\n");

    } /* end for linha */

    printf("\n");

    printf("Digite qq coisa\n");

} /* end atualiza */