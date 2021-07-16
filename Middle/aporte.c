#include <stdio.h>
#include <stdlib.h>

int main(){

    int quant[5] = {};
    float ativo[5] = {};
    float aporte = 0, aux;

    while(1){

        /* zerando a var aux, responsáel pela soma */
        aux = 0;

        printf("Insira o valor do aporte $: ");
        scanf(" %f",&aporte);

        for (int i = 0; i<=4; i++){

            printf("Ativo %d $: ",i+1);
            scanf(" %f",&ativo[i]);

            printf("Qtd   %d  : ",i+1);
            scanf(" %d",&quant[i]);

            aux += ativo[i]*quant[i];
            printf("O valor parcial eh: %.2f \n",aux);

            /* todas as informações foram dadas nesse ponto */
        } /* end for */

        /* aux guarda o gasto total */
        printf("Total $: %.2f \n",&aux);

        if (aux <= aporte)
            printf("Aporte suficiente \n");
        else
            printf("Aporte insuficiente \n");
        
        char opt;
        /* perguntar se deveja inserir um novo dado */
        printf("Calcular novamente? Digite 's' ou 'n': ");
        scanf(" %c",&opt);

        if ((opt == 'n') || (opt == 'N'))
            break;
        else if ((opt == 's') || (opt == 'S')){
            /* faça nada */
        }
        else{
            printf("Entrada invalida, o processo ira encerrar !\n");
            break;
        } /* end else */
    } /* end loop */

    system("PAUSE");
    return 0;
} /* end main */