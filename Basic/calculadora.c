#include <stdio.h>
#include <stdlib.h>

float a = 0.0, b = 0.0;

int main(){
    /* pedindo a entrada de dois números reais*/
    printf("Digite dois numeros reais quaisquer: ");
    scanf("%f%f",&a,&b);
    /*printf("O valor de a eh: %.2f\n",a);
    printf("O valor de b eh: %.2f",b);
    linhas de teste concluidas, caso queira no futuro, temos elas
    */
    printf("%f x %f = %f \n",a,b,a*b);
    printf("%f - %f = %f \n",a,b,a-b);
    if (b == 0){
        /* divisão impossível*/
        printf("Nao eh possivel efetuar a divisao \n");
    } // end if b = 0

    else {
        printf("%f / %f = %f ",a,b,a/b);
    } // end else

    system("PAUSE");
    return 0;
} /* end main */