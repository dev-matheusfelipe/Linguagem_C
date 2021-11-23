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
/*Faça um Programa que leia um vetor de 10 caracteres, e diga quantas
consoantes foram lidas. Imprima as consoantes.  */

// Resposta exercício 4
//  ************INCOMPLETO********************* \\
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
#include <stdio.h>

int main()
{
    float notas[4];
    float media[10];
    float soma = 0;
    int contador = 0;
    int i,j;
    
    for(i=0; i<10; i++) {
        printf("\nInforme as notas do aluno %i \n", i+1);
        for(j=0; j<4; j++) {
            printf("Nota %i: ", j+1);
            scanf("%f", &notas[j]);
            soma = soma + notas[j];
        }   
        
        media[i] = soma / 4;
        printf("\nA media do aluno %i é: %0.2f", i+1, media[i]);
        
        if(media[i] >= 7) {
            contador++;
        }
        soma = 0;
    }
    
    printf("\nQuantidade de alunos com notas >= a 7 é: %i", contador);
    
    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  7

// Pergunta exercício 7
/* Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma,
a multiplicação e os números. */

// Resposta exercício 7
#include <stdio.h>

int main()
{

    int valor[5], i, c, soma=0, mult=0;
    
    for(i=0; i<5; i++)
    {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &valor[i]);
        soma=soma+valor[i];
    }
    
    mult = valor[4] * valor[3] * valor[2] * valor[1];
    
    printf("\nValores digitados:\n");
    for(c=0; c<5; c++) {
        printf("%d. ",valor[c]);
    }
    printf("\n\nO valor somado é: %d", soma);
    printf("\nO valor multiplicado é: %d", mult);
    
    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  8

// Pergunta exercício 8
/* Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa
a ordem lida.  */

// Resposta exercício 8
#include <stdio.h>

int main()
{

    int idade[5];
    float altura[5];
    int i;
    
    for (i=0; i<=5; i++) {
      // Inicializando o vetor com zeros
      idade[i] = 0;
      altura[i] = 0;
    }
    
    for(i=0; i<5; i++)
    {
        printf("Digite a idade da %dº pessoa: ", i+1);
        scanf("%d", &idade[i]);
        printf("Digite a altura da %dº pessoa: ", i+1);
        scanf("%f", &altura[i]);
    }
    
    printf("\nValores digitados:\n");
    for(i=0; i<5; i++) {
        printf("altura: %0.2f idade: %d \n",altura[i], idade[i]);
    }
    
    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  9

// Pergunta exercício 9
/* Faça um Programa que leia um vetor A com 10 números inteiros, calcule e
mostre a soma dos quadrados dos elementos do vetor. */
 
// Resposta exercício 9
#include <stdio.h>

int main()
{
    int A[0], i;
    int soma=0;
    
    for(i=0; i<10; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &A[i]);
    }
    
    for(i=0; i<10; i++) {
        soma = soma + (A[i]*A[i]);
    }
    
    printf("\nA soma dos quadrados dos elementos do vetor é: %d", soma);

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  10

// Pergunta exercício 10
/* Faça um Programa que leia dois vetores com 10 elementos cada. Gere um
terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos
elementos intercalados dos dois outros vetores. */ 

// Resposta exercício 10
#include <stdio.h>

int main()
{
    int vet1[10], vet2[10], vet3[20];
    int i;
    
    //Ler valores para o primeiro vetor
    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &vet1[i]);
    }
    printf("\n");
    
    //Ler valores para o segundo vetor
    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &vet2[i]);
    }
    printf("\n");
    
    //mostra valores para o primeiro vetor
    printf("Vetor 1: \n");
    for (i=0; i<10; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");
    
    //mostra valores para o segundo vetor
    printf("Vetor 2: \n");
    for (i=0; i<10; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");
    
    //Preencher o terceiro vetor
    //[0 1 2]
    //[0 1 2]
    //[0 0 1 1 2 2]
    //[0 1 2 3 4 5]
    for (i=0; i<10; i++) {
        vet3[i*2] = vet1[i];
    }
    
    for (i=0; i<10; i++) {
        vet3[i*2+1] = vet2[i];
    }

    //mostra valores para o terceiro vetor
    printf("Vetor 3: \n");
    for (i=0; i<20; i++) {
        printf("%i ", vet3[i]);
    }

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  11

// Pergunta exercício 11
/* . Altere o programa anterior, intercalando 3 vetores de 10 elementos cada. */ 

// Resposta exercício 11
#include <stdio.h>

int main()
{
    int vet1[10], vet2[10], vet3[10], vet4[30];
    int i;

    //Ler valores para o primeiro vetor
    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &vet1[i]);
    }
    printf("\n");

    //Ler valores para o segundo vetor
    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &vet2[i]);
    }
    printf("\n");

        //Ler valores para o terceiro vetor
    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &vet3[i]);
    }
    printf("\n");

    //mostra valores para o primeiro vetor
    printf("Vetor 1: \n");
    for (i=0; i<10; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    //mostra valores para o segundo vetor
    printf("Vetor 2: \n");
    for (i=0; i<10; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    //mostra valores para o terceiro vetor
    printf("Vetor 3: \n");
    for (i=0; i<10; i++) {
        printf("%i ", vet3[i]);
    }
    printf("\n");

    for (i=0; i<10; i++) {
        vet4[i*3] = vet1[i];
    }

    for (i=0; i<10; i++) {
        vet4[(i*3) + 1] = vet2[i];
    }

    for (i=0; i<10; i++) {
        vet4[(i*3) + 2 ] = vet3[i];
    }

    //mostra valores para o terceiro vetor
    printf("Final: \n");
    for (i=0; i<30; i++) {
        printf("%i ", vet4[i]);
    }

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  12

// Pergunta exercício 12
/* Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que
determine quantos alunos com mais de 13 anos possuem altura inferior à média
de altura desses alunos. */ 

// Resposta exercício 12
#include <stdio.h>

void main()
{
    //Declarando o vetor das idades com tamanho de 30 
    int idade[30]      = {10, 13, 27, 15, 12, 9, 11, 22, 13, 12, 13, 14, 30, 22, 30, 26, 53, 24, 32, 22, 35, 61, 41, 35, 32, 31, 40, 29, 11, 55 };
    
    //Declarando o vetor das alturas com tamanho de 30   
    float altura[30]  = {1.60, 1.35, 1.76, 1.98, 1.77, 1.66, 1.80, 2.00, 1.30, 1.80, 2.03, 1.55, 1.20, 1.36, 1.41, 1.63, 1.33, 1.58, 1.18, 1.78, 1.95, 1.32, 2.01, 1.74, 1.89, 1.76, 1.65, 1.36, 1.95, 1.82 };

    //Declaração de variáveis 
    float mediaAltura  = 0.0;
    float somar        = 0.0;
    int qtdMaiorTreze   = 0;

    //Soma das alturas
    for(int i = 0; i < 30; i++){
        somar = somar + altura[i];
    }
	  
    //Calculo da média  das alturas  
    mediaAltura = (somar/30);

    //Este for vai pecorre o vetor das 30 posições
    for(int i = 0; i < 30; i++)
    {
        //Verifica se a idade é maior que 13 anos e a altura dos que maiores de 13 que possuem um tamanho inferior a média
        if(idade[i] > 13 && altura[i] < mediaAltura)
            qtdMaiorTreze = qtdMaiorTreze + 1;
    }
    
    //Exibe a quantidade de alunos com mais de 13 anos e menor que a média
    printf("%i alunos possuem mais de 13 anos e altura inferior a  média de altura dos demais alunos \n", qtdMaiorTreze);
}

//===========================================================================================================================================//

// Fim
