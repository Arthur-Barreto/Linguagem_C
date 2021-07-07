#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* habilitando caracteres da lingua portuguesa */
    setlocale (LC_ALL,"Portuguese_Brazil");

    char opt;

    do{
        
        printf("N para novo cliente\n");
        printf("C para consultar clientes\n");
        printf("D para deletar clientes \n");
        printf("L para listar clientes \n");
        printf("S para sair \n");
        scanf(" %c",&opt);

        system("CLS");

        switch (opt){
            case 'N':
            case 'n':
                printf("Novo cliente\n");
                break;
            case 'C':
            case 'c':
                printf("Consultar cliente\n");
                break;
            case 'D':
            case 'd':
                printf("Deletar cliente\n");
                break;
            case 'L':
            case 'l':
                printf("Listar clientes\n");
                break;
            case 'S':
            case 's':
                printf("Sair\n");
                break;
            default:
                printf("Entrada invalida\n");
                break;
        }

    } while (opt != 's' &&  opt != 'S');

    system("PAUSE");
    return 0;

} /* end main */