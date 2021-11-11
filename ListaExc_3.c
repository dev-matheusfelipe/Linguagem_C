// Lista de Exercícios - Lista de exercícios sobre vetores

// EXERCÍCIO  1

// Pergunta exercício 1
/* Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.  */

// Resposta exercício 1
#include <stdio.h>

int main()
{
    
    int num[5];
    int i;
    
    for ( i=0; i<5; i++ ) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%i", &num[i]);
    }

    printf("\nOs números digitados são: %d | %d | %d | %d | %d", num[0], num[1], num[2], num[3], num[4]);

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  2

// Pergunta exercício 2
/* Faça um Programa que leia um vetor de 10 números reais e mostre-os na
ordem inversa. */

// Resposta exercício 2
#include <stdio.h>

int main()
{
    
    int vetor[10];
    int i;
    
    printf("*** Digite 10 numeros ***\n");
    
    for ( i=0; i<10; i++ ) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    printf("\nOs numeros digitados ao inverso são: %d | %d | %d | %d | %d | %d | %d | %d | %d | %d", vetor[9], vetor[8], vetor[7], vetor[6], vetor[5], vetor[4], vetor[3], vetor[2], vetor[1], vetor[0]);

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  3

// Pergunta exercício 3
/* Faça um Programa que leia 4 notas, mostre as notas e a média na tela. */

// Resposta exercício 3
#include <stdio.h>

int main()
{
    float soma, media[4];
    int i;
    
    for (i=0; i<4; i++) {
        printf("Digite o valor da %dº nota: ", i+1);
        scanf("%f", &media[i]);
        soma += media[i];
    }
    
    printf("\nValor da soma: %0.1f", soma);
    printf("\nA media das notas é: %0.1f", soma/4);

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  4

// Pergunta exercício 4

// Resposta exercício 4

//===========================================================================================================================================//

// EXERCÍCIO  5

// Pergunta exercício 5

// Resposta exercício 5

//===========================================================================================================================================//

// EXERCÍCIO  6

// Pergunta exercício 6

// Resposta exercício 6

//===========================================================================================================================================//

// EXERCÍCIO  7

// Pergunta exercício 7
 
// Resposta exercício 7

//===========================================================================================================================================//

// EXERCÍCIO  8

// Pergunta exercício 8
 
// Resposta exercício 8

//===========================================================================================================================================//

// EXERCÍCIO  9

// Pergunta exercício 9
 
// Resposta exercício 9

//===========================================================================================================================================//

// EXERCÍCIO  10

// Pergunta exercício 10
 
// Resposta exercício 10

//===========================================================================================================================================//

// EXERCÍCIO  11

// Pergunta exercício 11
 
// Resposta exercício 11

//===========================================================================================================================================//

// EXERCÍCIO  12

// Pergunta exercício 12
 
// Resposta exercício 12

//===========================================================================================================================================//

// Fim
