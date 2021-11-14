// LISTA DE EXERCÍCIOS DE ALGORITMOS ESTRUTURAS DE REPETIÇÃO 

// EXERCÍCIO  1 

// Pergunta exercício 1
/*Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
três e que se encontram no conjunto dos números de 1 até 500.*/

// Resposta exercício 1
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
    printf("\n A soma de todos os numeros ímpares e multiplos de 3 entre 1 a 500 é: %d", soma);
}


//===================================================================================================//


// EXERCÍCIO  2

// Pergunta exercício 2
/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar:
a. A menor altura do grupo;
b. A maior altura do grupo;*/

// Resposta exercício 2
#include<stdio.h>

int main()
{
    float altura;
    float guardaMaior = 1.82;
    float guardaMenor = 1.49;
    int i;

    printf("Digite a altura de 15 pessoas do grupo \n");
    printf("Digite a 1º altura: ");
    scanf("%f", &altura);

    guardaMaior=altura;
    guardaMenor=altura;

    for(i=1; i<5; i++) {
        
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

// Pergunta exercício 3
/*Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a
média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores
negativos e o percentual de valores negativos e positivos. */

// Resposta exercício 3
#include <stdio.h>

int main()
{
   int total = 0;
   int positivos = 0;
   int negativos = 0;
   
   float n = 0;
   float somatorio = 0, media = 0;
   
   printf("Digite quantos números quiser, para finalizar o calculo digite 0.");
   
   while(1){
       
       printf("\nDigite um número: ");
       scanf("%f", &n);
       
       if(n != 0){
           if(n > 0){
               positivos++;
           } else {
               negativos++;
               somatorio += n;
               total++;
           }
       } else {
           break;
       }
       
   }
   
   media = somatorio / total;
   
   printf("Média: %.2f\n", media);
   printf("Pos.: Foram digitados %d números Pos.  -  %.2f%% de números Pos.\n", positivos, (float) positivos / total);
   printf("Neg.: Foram digitados %d números Neg  -  %.2f%% de números Neg.\n", negativos, (float) negativos / total);

    return 0;
}

//===================================================================================================//

// EXERCÍCIO  4

// Pergunta exercício 4
/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve
terminar quando for lido um número negativo. */

// Resposta exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n=0;
    int cont=0;
    int seq1=0;
    int seq2=0; 
    int seq3=0; 
    int seq4=0;
    
    printf("Quantos números serão digitados: ");
    scanf("%i", &cont);
    
    for (int i=0; i<cont; i++) {
        
        printf("Digite um número: ");
        scanf("%d", &n);
        
        if (n<0) {
            i=cont;
        }
        
        if ((n>=0) && (n<=25)) {
            
            seq1++;
            
        } else if ((n>=26) && (n<=50)) {
            
            seq2++;
            
        } else if ((n>51) && (n<=75)) {
            
            seq3++;   
            
        } else if ((n>=76) && (n<=100)) {
            
            seq4++;
            
        }
        
        n=0;
        
    }
    
    printf("\nDe  0 á  25: %d", seq1);
    printf("\nDe 26 á  50: %d", seq2);
    printf("\nDe 51 á  75: %d", seq3);
    printf("\nDe 76 á 100: %d", seq4);
    printf("\nNúmero negativo digitado: %d", cont);
    
    return 0;
    
}

//===================================================================================================//

// EXERCÍCIO  5

// Pergunta exercício 5
/*Faça um algoritmo estruturado que leia uma quantidade não determinada de números positivos.
Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos
números lidos. O número que encerrará a leitura será zero. */
    
// Resposta exercício 5
#include <stdio.h>

int main()
{
    int valorGeral =0,
        valorPar = 0,
        numero = 1,
        resto = 0,
        qtdpar = 0,
        qtdimpar = 0,
        contador = 0;
        
        
    while ( numero != 0 ) {
        
        ++contador;
        
        printf("\nDigite um número: ");
        scanf("%d", &numero);
        
        valorGeral += numero;
        
        resto = numero%2;
        
        if(resto == 0) {
            valorPar += numero;
            qtdpar++;
        } else {
            qtdimpar++;
        }
        
    }
    
    printf("\nA média dos valores pares é: %d", (valorPar / qtdpar));
    printf("\nA média dos valores Gerais são: %d", (valorGeral / (qtdpar+qtdimpar)));

    return 0;
}

//===================================================================================================//

// EXERCÍCIO  6

// Pergunta exercício 6
/*Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. */ 

// Resposta exercício 6
#include <stdio.h>

void main(int argc, char **argv)
{

    int i,soma=0;

    for(i = 100; i <= 200; i++)
    {
        if(i%2 != 0)
        {
           soma=soma+i;
           printf("\n i: %d", i);
        }
    }
}

//===================================================================================================//

// EXERCÍCIO  7

// Pergunta exercício 7
/*Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N.
Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.*/ 

// Resposta exercício 7
#include <stdio.h>

int main()
{
    int tabuada = 0;
    int x;
    printf("\nDigite a tabuada que você deseja: ");
    scanf("%d", &tabuada);

    for(x = 0; x<=10; x++){
        //1 x 5 = 5
        printf("%dx%d = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}

//===================================================================================================//

// EXERCÍCIO  8

// Pergunta exercício 8
/*Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma seqüência em P.A.
contendo 10 valores.*/

// Resposta exercício 8
#include <stdio.h>

void main()
{
    //Declaração das variáveis
    int resposta = 0, nro = 0;
    
    //Pergunta ao usuário o valor inicial
    printf("Digite o valor inicial: \n");
    
    //Armazena a resposta na variável
    scanf("%i", &resposta);

    //Este loop atribui o valor da resposta a variável i
    for(int i = resposta; i > 0 ; )
    {
        //Aqui é reduzido o valor da variável i
        --i;

        //Caso o valor da variável nro seja 0 é realizado a primeira conta        
        if(nro == 0) {
            nro  = resposta * i;
        }
        /*Caso as variáveis de nro e i sejam diferentes de 0 o cáculo prossegue
          Verifica-se a variável de i = 0 somente para evitar que a conta nro * 0 atribua 0 a variável nro antes de exibir a mensagem*/
        else if(i !=0 ){
            nro  = nro * i; 
        }   
    }
    
    //Exibe o valor da conta resposta * (resposta -1) ...etc ...
    printf("\nResultado: %i", nro);      
    printf("\n.....FIM.....");
}

//===================================================================================================//

// EXERCÍCIO  9

// Pergunta exercício 9
/*Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma seqüência em P.G.
contendo 10 valores.*/

// Resposta exercício 9

//===================================================================================================//

// EXERCÍCIO  10

// Pergunta exercício 10
/*Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo
de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120 */

// Resposta exercício 10
#include <stdio.h>

int main()
{
    int i,a;
    
    printf("Digite um valor: ");
    scanf("%d", &a);
    
    for ( i=a; i>0; i--) {
        
        printf("%d. ", i);
        
    }

    return 0;
}

//===========================================================================================================================================//

// Fim
