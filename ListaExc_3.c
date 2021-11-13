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
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, cont=0;
    char vet[3];
    
    printf("*** Digite 10 palavras ***\n");
    
    for (i=0; i<3; i++) {
        printf ("Digite a %dº palavra: ", i+1);
        scanf("%s", &vet[i]);
    }

    for(i=0; i<3; i++) {
        
        if( vet[i] != 'a' || vet[i] != 'e' || vet[i] != 'i' || vet[i] != 'o' || vet[i] != 'u') {
            cont ++;
        }
    }
    
    printf ("A quatidade de consoantes foram: %d\n", cont);
    printf ("%s", vet[i]);
    
    return 0;

}

//===========================================================================================================================================//

// EXERCÍCIO  5

// Pergunta exercício 5
/* Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor PAR e os números IMPARES no vetor
ímpar. Imprima os três vetores. */
    
// Resposta exercício 5
#include <stdio.h>

int main() {
   
   
    int vet[20],a=0,b=0,c=0;
    int impar[10];
    int par[10];


    for(c=0; c<20; c++) {
        printf("Digite o %dº numeros:", c+1);
        scanf("%d", &vet[c]);
        
        if(vet[c] %2 == 0){
            par[a] = vet[c];
            a++;
        }else {
            impar[b] = vet[c];
            b++;
        }
    }

    printf("\n\nVetor original:\n");
    for(c=0; c<20; c++) {
        printf("%d. ",vet[c]);
    }
    
    printf("\n\nVetor impar:\n");
    for(c=0; c<10; c++) {
        printf("%d. ",impar[c]);
    }

    printf("\n\nVetor par:\n");
    for(c=0; c<10; c++) {
        printf("%d. ",par[c]);
    }

}

//===========================================================================================================================================//

// EXERCÍCIO  6

// Pergunta exercício 6
/* Faça um Programa que peça as quatro notas de 10 alunos, calcule e
armazene num vetor a média de cada aluno, imprima o número de alunos com
média maior ou igual a 7.0. */

// Resposta exercício 6

//===========================================================================================================================================//

// EXERCÍCIO  7

// Pergunta exercício 7
/* Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma,
a multiplicação e os números. */

// Resposta exercício 7

//===========================================================================================================================================//

// EXERCÍCIO  8

// Pergunta exercício 8
/* Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa
a ordem lida.  */

// Resposta exercício 8

//===========================================================================================================================================//

// EXERCÍCIO  9

// Pergunta exercício 9
/* Faça um Programa que leia um vetor A com 10 números inteiros, calcule e
mostre a soma dos quadrados dos elementos do vetor. */
 
// Resposta exercício 9

//===========================================================================================================================================//

// EXERCÍCIO  10

// Pergunta exercício 10
/* Faça um Programa que leia dois vetores com 10 elementos cada. Gere um
terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos
elementos intercalados dos dois outros vetores. */ 

// Resposta exercício 10

//===========================================================================================================================================//

// EXERCÍCIO  11

// Pergunta exercício 11
/* . Altere o programa anterior, intercalando 3 vetores de 10 elementos cada. */ 

// Resposta exercício 11

//===========================================================================================================================================//

// EXERCÍCIO  12

// Pergunta exercício 12
/* Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que
determine quantos alunos com mais de 13 anos possuem altura inferior à média
de altura desses alunos. */ 

// Resposta exercício 12

//===========================================================================================================================================//

// Fim
