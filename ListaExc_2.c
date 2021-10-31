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
