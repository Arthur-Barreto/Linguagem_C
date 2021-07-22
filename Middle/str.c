#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30],
        sobrenome[30],
        endereco[100],
        bairro[30],
        cep[10],
        telefone[20];

    printf("Informe o seu nome: ");
    scanf("%s",nome);
    system("cls");

    printf("Informe o seu sobrenome: ");
    scanf("%s",sobrenome);
    system("cls");

    printf("Informe o seu endereco: ");
    gets(endereco);
    system("cls");

    printf("Informe o seu bairro: ");
    gets(bairro);
    system("cls");

    printf("Informe o seu cep, no seguinte formato xxxx-xxx: ");
    gets(cep);
    system("cls");

    printf("Informe o seu telefone, no seguinte formato xx xxxxx xxxx: ");
    gets(telefone);
    system("cls");

    printf("%s %s\n",nome,sobrenome);
    printf("%s\n",endereco);
    printf("%s\n",bairro);
    printf("%s\n",cep);
    printf("%s\n",telefone);

    system("PAUSE");
    return 0;

} /* end main */