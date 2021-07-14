/*
Programa que pergunta ao usuario a quantidade de degraus
e imprimi a mesma a depender do número digitado. Segue exemplo:

1
#

5
#
##
###
####
#####

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int d = 1;

    printf("Digite a quantidade de degruas da escada: \n");
    scanf("%d",&d);

    /* pular uma linha antes de printar a escada */
    putchar('\n');

    for(int i = 1; i <= d; i++){

        /* para imprimir gradualmente usamos coluna <= linha
        dai, j <= i
        após a impressã de cada linha, adicionamos quebra de linha
        */

        for(int j = 1; j<= i; j++){

            printf("#");

        } /* end for coluna */

        putchar('\n');

    }/* end for linha */

    system("PAUSE");
    return 0;

} /* end main */