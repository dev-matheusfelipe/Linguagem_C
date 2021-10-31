// LISTA DE EXERCÍCIOS DE ALGORITMOS ESTRUTURAS DE REPETIÇÃO 

// EXERCÍCIO  1 

#include <stdio.h>

void main(int argc, char **argv)
{

    int i,soma=0;

    for(i = 1; i <= 500; i++)
    {
        if(i%2 != 0 && i%3 == 0)
        {
           soma=soma+i;
           printf("\n i: %d", i);
        }
    }
    printf("\n soma de todos os numeros ímpares e multiplos de 3 entre 0 e 500: %d", soma);
}


//===================================================================================================//


// EXERCÍCIO  2

#include<stdio.h>
int main()
{
    float altura, guardaMaior, guardaMenor;
    int i;

    printf("Digite a altura de 15 pessoas do grupo \n");
    printf("Digite a 1º altura: ");
    scanf("%f", &altura);

    guardaMaior=altura;
    guardaMenor=altura;

    for(i=1; i<15; i++) {
        
        printf("\nDigite a %dº altura: ",i+1);
        scanf("%f", &altura);
        
        if(altura>guardaMaior){
            guardaMaior=altura;
        } else {
            if(altura<guardaMenor) {
                guardaMenor=altura;
            }
        }
    }

    printf("\nO menor altura do grupo: %.2f", guardaMenor);
    printf("\nO maior altura do grupo: %.2f", guardaMaior);

 return 0;
} 

//===================================================================================================//

// EXERCÍCIO  3

