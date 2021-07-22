#include <stdio.h>
#include <stdlib.h>

/* macros do sistema */

#define l 4
#define c 6

/* protipo de funções */

void atualiza();
void show();

/* variaveis globais */

int mat[l][c] = {};

int main(){

    /* criando a matriz de inteiros */

    while(1){

    atualiza();

    system("cls");

    } /* end while */

    system("PAUSE");
    return 0;

} /* end main */

/* desenvolvimento de funções */

void atualiza(){

    int linha,coluna,num;

    show();

    printf("\n");

    printf("Digite a linha desejada:  ");
    scanf(" %d",&linha);

    printf("Digite a coluna desejada: ");
    scanf(" %d",&coluna);

    printf("Digite o numero desejado: ");
    scanf(" %d",&num);

    /* atualizando a matriz */

    mat[linha-1][coluna-1] = num;

    show();

} /* end atualiza */

void show(){

    for (int i = 0; i<l; i++){
        /* a cada linha adiciona o separador, com 28 "_" */
        printf("-------------------------------------\n");

        for (int j = 0; j<c; j++){

            /* se for a ultima coluna precisamos colocar dois separadores */

            if(j==(c-1))
                printf("|  %d  |", mat[i][j]);
            else
                printf("|  %d  ", mat[i][j]);
            
        } /* end for coluna */

        /* inserindo quebra de linha, sem esta não tem como imprimir a linha separatoria */
        printf("\n");

        /* adocionando a última linha de "-" */
        if(i == (l-1))
            printf("-------------------------------------\n");

    } /* end for linha */

} /* end show */