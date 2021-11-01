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


