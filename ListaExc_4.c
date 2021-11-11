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
    
    // Pede para o usuario digitar os valores na tela
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

// Resposta exercício 3

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

// Fim
