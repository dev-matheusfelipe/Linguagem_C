#include <stdio.h>

int main(int argc, char **argv)
{
    printf("\n Qual é o seu nome? ");
    char nome[20];
    fflush(stdin);
    scanf("%s", nome);
    printf("Olá, %s! Tudo bem com você? \n", nome);
    return 0;
}
