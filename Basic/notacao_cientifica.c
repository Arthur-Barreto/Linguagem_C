/*
    Testando notação cientifica em C
    Autor: Arthur Barreto

*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    /* declaração de variaveis */
    float pi = 3.141592,
        R = 3e3,
        C = 1e-6,
        f;

    f = 1/(2*pi*R*C);

    printf("A frequencia de corte eh: %.2f",f);


} /* end main */