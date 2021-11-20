//Lista de Exercícios - Algoritmos sobre matrizes

// EXERCÍCIO  1 

// Pergunta exercício 1
/*Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz

Obs: Na figura abaixo o X indica os elementos que devem ser somados
Linha 3 Coluna 2 Diagonal Principal Diagonal Secundária Todos os elementos
======= ======== ================== =================== ==================
 .....    ..X..          X....              ....X                XXXXX
 .....    ..X..          .X...              ...X.                XXXXX
 .....    ..X..          ..X..              ..X..                XXXXX
 XXXXX    ..X..          ...X.              .X...                XXXXX
 .....    ..X..          ....X              X....                XXXXX     */

// Resposta exercício 1
#include <stdio.h>

int main()
{
    // variaveis
    int M[5][5];
    int i, j;
    // variaveis Linha 3
    int linha3_soma[0][0];
    // variaveis Coluna 2
    int Coluna2_soma[0][0];
    // variaveis Diagonal Principal
    int DgnPrincipal_soma[0][0];
    // variaveis Diagonal Secundária
    int DgnSecundaria_soma[0][0];
    // variaveis Todos os elementos
    int soma;
    
    // Escreve uma mensagem para o usuario
    printf("Digite o valor para os elementos da matriz: ");
    
    // Recebimento dos valores para cada elemento
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("\nElemento[%d][%d]=", i, j);
            scanf("%d", &M[i][j]);
            soma += M[i][j]; //Soma Todos os elementos
        }
    }
    
    // Soma linha 3
    linha3_soma[0][0] = M[3][0] + M[3][1] + M[3][2] + M[3][3] + M[3][4];
    // Soma Coluna 2
    Coluna2_soma[0][0] = M[0][2] + M[1][2] + M[2][2] + M[3][2] + M[4][2];
    // Soma Diagonal Principal
    DgnPrincipal_soma[0][0] = M[0][0] + M[1][1] + M[2][2] + M[3][3] + M[4][4];
    // Soma Diagonal Secundária
    DgnSecundaria_soma[0][0] = M[0][4] + M[1][3] + M[2][2] + M[3][1] + M[4][0];
    
    // Retorna na tela a soma linha 3
    printf("\nA soma da linha 3 é: %d", linha3_soma[0][0]);
    // Retorna na tela a soma Coluna 2
    printf("\nA soma da Coluna 2 é: %d", Coluna2_soma[0][0]);
    // Retorna na tela a soma Diagonal Principal
    printf("\nA soma Diagonal Principal é: %d", DgnPrincipal_soma[0][0]);
    // Retorna na tela a soma Diagonal Secundária
    printf("\nA soma Diagonal Secundária é: %d", DgnSecundaria_soma[0][0]);
    // Retorna na tela a soma Todos os elementos
    printf("\nA soma de todos os elementos é: %d", soma);
    
    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  2

// Pergunta exercício 2
/*Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o
X. Utilizar estruturas de repetição.
 Cl1      Cl2     Cl3      Cl4
 XX..  || ....  || X...  || .XXX
 XX..  || ....  || XX..  || ..XX
 ....  || ..XX  || XXX.  || ...X
 ....  || ..XX  || XXXX  || ....  */

// Resposta exercício 2
#include <stdio.h>

int main()
{
    // variaveis
    int A[4][4];
    int i, j, resp;
    int exp_1_soma1[0][0], exp_1_soma2[0][0];
    int exp_2_soma1[0][0], exp_2_soma2[0][0];
    int exp_3_soma1[0][0], exp_3_soma2[0][0], exp_3_soma3[0][0], exp_3_soma4[0][0];
    int exp_4_soma1[0][0], exp_4_soma2[0][0], exp_4_soma3[0][0];
    
     // Escreve uma mensagem para o usuario
    printf("Digite o valor para os elementos da matriz: ");
    
    // Recebimento dos valores para cada elemento
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("\nElemento[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Soma do primeiro exemplo de matriz
    exp_1_soma1[0][0] = A[0][0] + A[0][1];
    exp_1_soma2[0][0] = A[1][0] + A[1][1];
    // Soma do segundo exemplo de matriz
    exp_2_soma1[0][0] = A[2][2] + A[2][3];
    exp_2_soma2[0][0] = A[3][2] + A[3][3];
    // Soma do terceiro exemplo de matriz
    exp_3_soma1[0][0] = A[0][0];
    exp_3_soma2[0][0] = A[1][0] + A[1][1];
    exp_3_soma3[0][0] = A[2][0] + A[2][1] + A[2][2];
    exp_3_soma4[0][0] = A[3][0] + A[3][1] + A[3][2] + A[3][3];
    // Soma do quarto exemplo de matriz
    exp_4_soma1[0][0] = A[0][1] + A[0][2] + A[0][3];
    exp_4_soma2[0][0] = A[1][2] + A[1][3];
    exp_4_soma3[0][0] = A[2][3];
    
    //Soma de cada exemplo marcado com o X.
    resp = exp_1_soma1[0][0] + exp_1_soma2[0][0] + exp_2_soma1[0][0] + exp_2_soma2[0][0] + 
    exp_3_soma1[0][0] + exp_3_soma2[0][0] + exp_3_soma3[0][0] + exp_3_soma4[0][0] +
    exp_4_soma1[0][0] + exp_4_soma2[0][0] + exp_4_soma3[0][0];
    
    // Retorna na tela a soma de todos os elementos da matriz
    printf("A soma das matrizes é: %d", resp);
    
    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  3

// Pergunta exercício 3
/*Faça uma função que recebe uma matriz A[5][5] e retorna a soma dos seus elementos.*/
 
// Resposta exercício 3
#include <stdio.h>
#include <stdlib.h>

int main() {

    int tam = 5;
    int l, c, matriz[tam][tam];
    int soma = 0;

    // preenche a matriz gerando valores aleatórios
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            
            matriz[l][c] = rand() % 10;
            
        }
    }
  
    // imprime a matriz na tela
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
          soma = soma + matriz[l][c];  
        }
    }

    printf("O valor da soma dos elementos da matriz é: %i", soma);
    
    return 0 ;
}

//===========================================================================================================================================//

// EXERCÍCIO  4

// Pergunta exercício 4
/*Faça uma função que recebe uma matriz A[6][6] e retorna a soma dos elementos da
sua diagonal principal e da sua diagonal secundária */

// Resposta exercício 4
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   //variavel matriz
    int A[6][6];
    //variaveis do for
    int i, j;
    //variaveis Diagonal Principal
    int DgnPrincipal_soma[0][0];
    //variaveis Diagonal Secundária
    int DgnSecundaria_soma[0][0];
    
    //Recebimento dos valores para cada elemento
    for (i=0; i<6; i++) {
        for (j=0; j<6; j++) {
            A[i][j] = rand() % 10;
        }
    }
    
    //imprime a matriz na tela
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%d ", A[i][j]);
        }
        //Quebra uma linha
        printf("\n");
    }
    
    //Exemplo da matriz Diagonal Principal
    /*  X.....
        .X....
        ..X...
        ...X..
        ....X.
        .....X   */
        
    //Exemplo da matriz Diagonal Secundária
    /*
        .....X
        ....X.
        ...X..
        ..X...
        .X....
        X.....  */
    
    //Soma Diagonal Principal
    DgnPrincipal_soma[0][0] = A[0][0] + A[1][1] + A[2][2] + A[3][3] + A[4][4] + A[5][5];
    //Soma Diagonal Secundária
    DgnSecundaria_soma[0][0] = A[0][5] + A[1][4] + A[2][3] + A[3][2] + A[4][1] + A[5][0];
    
    //Retorna na tela a soma Diagonal Principal
    printf("\nA soma Diagonal Principal é: %d", DgnPrincipal_soma[0][0]);
    //Retorna na tela a soma Diagonal Secundária
    printf("\nA soma Diagonal Secundária é: %d", DgnSecundaria_soma[0][0]);

    return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  5

// Pergunta exercício 5
/* Faça uma função que recebe uma matriz A[7][6] e retorna a soma dos elementos da
linha 5 e da coluna 3. */

// Resposta exercício 5
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //variaveis
    int A[7][6];
    int i, j;
    //variaveis linha 5
    int linha5_soma[0][0];
    //variaveis coluna 3
    int Coluna3_soma[0][0];

    //preenche a matriz gerando valores aleatórios
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            A[i][j] = rand() % 10;
        }
    }

    //Exemplo da matriz
    /*  ...X..   
        ...X..
        ...X..
        ...X..
        ...X..
        XXXXXX
        ...X..   */
    
    //imprime a matriz completa na tela
    for(i=0; i<7; i++){
        for(j=0; j<6; j++){
            printf("%d ", A[i][j]);
        }
        //Quebra uma linha
        printf("\n");
    }

    // Soma linha 5
    linha5_soma[0][0] = A[5][0] + A[5][1] + A[5][2] + A[5][3] + A[5][4] + A[5][5];
    // Soma coluna 3
    Coluna3_soma[0][0] = A[0][3] + A[1][3] + A[2][3] + A[3][3] + A[4][3] + A[5][3] + A[6][3];

    // Retorna na tela a soma linha 5
    printf("\nA soma da soma linha 5 é: %d", linha5_soma[0][0]);
    // Retorna na tela a soma coluna 3
    printf("\nA soma da soma coluna 3 é %d", Coluna3_soma[0][0]);


  return 0;
}

//===========================================================================================================================================//

// EXERCÍCIO  6

// Pergunta exercício 6
/* Faça uma função que recebe uma matriz A[6][6] e retorna o menor elemento da sua
diagonal secundária. */

// Resposta exercício 6
#include<stdio.h>

    // Exemplo da matriz Diagonal Principal
    /*  X.....
        .X....
        ..X...
        ...X..
        ....X.
        .....X   */

int main()
{
    // variaveis
    int A[6][6];
    int guardaMaior=0;
    int guardaMenor=1;
    int i,j;
    
    // Recebimento dos valores para cada elemento
    for(i=0; i<6; i++) 
    {
        for(j=0; j<6; j++) 
        {
            printf("Digite um valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            
            if(A[i][j]>guardaMaior)
            {
                guardaMaior=A[i][j];
            } else 
            {
                if(A[i][j]<guardaMenor)
                {
                    guardaMenor=A[i][j];
                }
            }
        }
    }
    
    // Escreve uma mensagem para o usuario
    printf("\nO menor digitado foi: %d", guardaMenor);
    printf("\nO maior digitado foi: %d", guardaMaior);

 return 0;
}


//===========================================================================================================================================//

// EXERCÍCIO  7 

// Pergunta exercício 7
/* Faça uma função que recebe uma matriz A[8][8] e calcula o maior elemento da sua
diagonal principal. A seguir, a função deve dividir todos os elementos de A pelo maior
encontrado. A função deve retornar a matriz alterada. */
 
// Resposta exercício 7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variaveis
    int A[8][8];
    int guardaMaior=0;
    int soma=0;
    int reslt=0;
    int i,j;
    
    // preenche a matriz gerando valores aleatórios
    for(i=0; i<8; i++){
        for(j=0;  j<8; j++){
            //Gera numeros aleatorios para a matriz
            A[i][j] = rand() % 10;
            //Soma cada elemento da matriz
            soma = soma + A[i][j];
            //Verifica os numeros digitados somente na matriz Diagonal Principal
            if( (A[0][0]) && (A[1][1]) && (A[2][2]) && (A[3][3]) && (A[4][4]) && (A[5][5]) && (A[6][6]) && (A[7][7]) > guardaMaior)
            {
                guardaMaior=A[i][j];
            }
        }
    }
    
    //imprime a matriz completa na tela
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("%d ", A[i][j]);
        }
        //Quebra uma linha
        printf("\n");
    }
    
    //imprime a matriz Diagonal Principal na tela
    printf("%d %d %d %d %d %d %d %d", A[0][0], A[1][1], A[2][2], A[3][3], A[4][4], A[5][5], A[6][6], A[7][7]);
    //Quebra uma linha
    printf("\n");
    
    //Essa linha pega a soma da matriz e divide pelo maior numero encontrado na Diagonal Principal
    reslt = soma/guardaMaior;
    
    //Escreve uma mensagem para o usuario
    printf("\nO maior numero encontrado foi: %d \nA matriz gerada divida pelo maior numero e: %d",guardaMaior, reslt);

    return 0;
}

//===========================================================================================================================================//

// Fim
