#include <stdio.h>
#include <stdlib.h>

int main(){

    /* inicialização de variaveis*/
    int a = 0, b = 1, c;
    /* printando os dois dados iniciais */
    printf("%d \n",a);
    printf("%d \n",b);

    while(1){

        /* loop para calcular o próximo fibinacci */

        c = a + b;

        /* para não dar overflow e para a lógica funcionar,
        precisamos redefinir os valores de a e b para o próximo passo
         */
        
        a = b;
        b = c;

        if (c<=1000){
            printf("%d \n",c);
        } /* end if c */

        else
            break;

    } /* end while */

    system("PAUSE");
    return 0;

} /* end main */