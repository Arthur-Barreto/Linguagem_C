#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned short int a = 0;

    printf("Digite um numero inteiro positivo menor ou igual a 85: ");
    scanf("%d",&a);

    if (a > 85)
        printf("Numero fora do intervalo permitido \n");
    else{
        unsigned short int b = 0, c = 0, d = 0, e = 0, s,s1;
        b = a + 1;
        c = a - 1;
        s = a + b + c;
        s1 = s*s;

        printf("O valor do numero somado a 1                     : %d \n",b);
        printf("O valor do numero subtraido de 1                 : %d \n",c);
        printf("A soma de todos os numeros envolviods            : %d \n",s);
        printf("O quadrado da soma de todos os numeros envolviods: %d \n",s1);

    } /* end else */

    system("PAUSE");
    return 0;
} /* end main */