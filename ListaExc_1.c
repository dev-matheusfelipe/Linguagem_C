//Lista de Exercícios - Algoritmos

// EXERCÍCIO  1 

// Pergunta exercício 1
/*O proprietário da empresa ABC LTDA precisa de um programa de computador para
calcular o novo salário que seus funcionários irão receber a partir do mês que vem.
Sabendo que o aumento de salário para todos os funcionários será de 25%, faça um
programa que lê o valor do salário atual do funcionário e informa o seu novo salário
acrescido de 25%.*/

// Resposta exercício 1
#include <stdio.h>

int main()
{
    int salario, aumento, final;
    printf("\tABC LTDA\n");
    printf("Digite o valor do salario: ");
    scanf("%i", &salario);
    
    if (salario > 0) {
        
        aumento = salario * 0.25;
        final = aumento + salario;
        printf("O salario do funcionario ABC é R$%i reais, \napartir do mês que vem.", final);
        
    } else {
        
        printf("Valor invalido!");
        
    }
    
    return 0;
}

//===========================================================================================================================================//

//  Exercício - 2

// Pergunta exercício 2
/*Um dos sócios da empresa XYZ LTDA ficou sabendo que você desenvolveu um
programa de reajuste salarial para a empresa ABC LTDA e pediu que você desenvolva
um programa similar. Na verdade ele está pedindo que você acrescente ao programa
anterior à possibilidade dele informar não somente o salário atual do funcionário, mas
também o valor percentual que deve ser incrementado para aquele funcionário, pois
ele irá aplicar valores percentuais diferentes a cada funcionário.*/

// Resposta exercício 2
#include <stdio.h>

int main()
{
    int salario, aumento, final;
    float porcent;
    printf("\tXYZ LTDA\n");
    printf("Digite o valor do salario: ");
    scanf("%i", &salario);
    printf("Digite o valor da porcentagem: ");
    scanf("%f", &porcent);
    
    if (salario > 0) {
        
        aumento = salario * porcent;
        final = aumento + salario;
        printf("O salario do funcionario XYZ é R$%i reais.", final);
        
    } else {
        
        printf("Valor invalido!");
        
    }
    
    return 0;
}

//===========================================================================================================================================//

//  Exercício - 3

// Pergunta exercício 3
/*Crie um programa que lê o ano de nascimento de uma pessoa e o ano atual. Calcule e
mostre qual é: a idade da pessoa em anos, a idade da pessoa em meses, a idade da
pessoa em dias e a idade da pessoa em semanas.*/
    
// Resposta exercício 3
#include <stdio.h>

int main()
{
    
    int dias = 365;
    int meses = 12;
    int semanas = 52;
    int anoNasc;
    int anoAtual;
    int idade;

    
    printf("Digite o ano de nascimento: ");
    scanf("%i", &anoNasc);
    
    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);
    
    idade = anoAtual - anoNasc;
    meses = idade * meses;
    dias = idade * dias;
    semanas = idade * semanas;
    
    printf("A idade em anos é: %i", idade);
    printf("\nSua idade em meses é: %i", meses);
    printf("\nSua idade em semanas é: %i", semanas);
    printf("\nSua Idade em dias é: %i", dias);

    
    return 0;

}

//===========================================================================================================================================//

//  Exercício - 4

// Pergunta exercício 4
/*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os
quais fornece a quantidade de ração em gramas. A quantidade diária de ração
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do
saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
quanto restará de ração no saco após cinco dias.*/
    
// Resposta exercício 4
#include <stdio.h>

int main()
{
    float pesoSaco;
    float racaoPorDia;
    float quantRestante;
    
    printf("Informe o peso do saco de racao em Kg: ");
    scanf("%f",&pesoSaco);
    
    printf("\nInforme a quantidade diaria consumida em gramas: ");
    scanf("%f",&racaoPorDia);
    
    quantRestante = pesoSaco - ((racaoPorDia*2*5)/1000);
    
    printf("\nA quantidade restante de racao é: %0.2fKg\n",quantRestante);
    
    return 0;
}

//===========================================================================================================================================//

//  Exercício - 5

// Pergunta exercício 5
/*Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a
variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da
variável A. Apresentar os valores após a efetivação do processamento da troca.*/

// Resposta exercício 5
#include <stdio.h>

int main()
{
    int A, B;
    int guardA;
    
    printf("Digite o valor de A: ");
    scanf("%i", &A);
    
    printf("\nDigite o valor de B: ");
    scanf("%i", &B);
    
    printf("\n\tO valor de A é: %i", A);
    printf("\n\tO valor de B é: %i", B);
    
    guardA = A;
    
    A = B;
    
    B = guardA;
    
    
    printf("\n\n\tO valor de A é: %i", A);
    printf("\n\tO valor de B é: %i", B);
    
    return 0;
}

//===========================================================================================================================================//

//  Exercício - 6

// Pergunta exercício 6
/*Elaborar um programa que calcule e apresente o valor do volume de uma caixa
retangular, utilizando a fórmula VOLUME <- COMPRIMENTO * LARGURA * ALTURA.*/

// Resposta exercício 6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float VOLUME, COMPRIMENTO, LARGURA, ALTURA;
    
    printf("Digite a largura da caixa: ");
    scanf("%f", &LARGURA);
    
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &COMPRIMENTO);
    
    printf("Digite a altura da caixa: ");
    scanf("%f", &ALTURA);
    
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
    
    printf("O volume da caixa retangular e: %.3f", VOLUME);

    return 0;
}

//===========================================================================================================================================//

//  Exercício - 7

// Pergunta exercício 7
/*Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar
o resultado do quadrado da diferença do primeiro valor (variável A) em relação ao
segundo valor (variável B).*/

// Resposta exercício 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    
    double A = 0;
    double B = 0;
    double quadrado = 0;
    double raizA = 0;
    double raizB = 0;
    
    //Quadrado
    printf("\nFuncao ao Quadrado\n\n");
    //Função ler o valor A digitado pelo usuario
    printf("Digite o valor para A: ");
    scanf("%lf", &A);
    //Função ler o valor B digitado pelo usuario
    printf("\nDigite o valor para B: ");
    scanf("%lf", &B);
    //Quadrado recebe A - B
    quadrado = A - B;
    //Valor de A e B ao quadrado
    printf("\nO valor de A e B ao quadrado e: %.2lf \n", quadrado * quadrado);
    
    /*==========================================================================*/
    
    //Raiz
    printf("\nFuncoes de raiz\n\n");
    //Função ler o valor A digitado pelo usuario
    printf("Digite o valor para A: ");
    scanf("%lf", &A);
    //Função ler o valor B digitado pelo usuario
    printf("\nDigite o valor para B: ");
    scanf("%lf", &B);
    //Função mostra o valor digitado pelo usuario
    printf("\n\nValor original de A = %.2lf",A);
    printf("\nValor original de B = %.2lf\n\n",B);
    //Raiz de A
    raizA = sqrt(A);
    //Raiz de B
    raizB = sqrt(B);
    //Valor da Raiz de A
    printf("Valor da raiz de A: %.2lf \n", raizA);
    //Valor da Raiz de B
    printf("Valor da raiz de B: %.2lf \n", raizB);

    return 0;
}

//===========================================================================================================================================//

//  Exercício - 8

// Pergunta exercício 8
/*Elaborar um programa que apresente o valor da conversão em real (R$) de um valor
lido em dólar (US$). O programa deve solicitar o valor da cotação do dólar.*/

// Resposta exercício 8
#include <stdio.h>

int main()
{   
    float cotacao=0;
    float dolar=0;
    float reais=0;
    
    printf("Cotação de (US$)Dolar em (R$)Reais");
    
    printf("\nInforme a quantidade de dolar para conversão: US$");
    scanf("%f", &dolar);
    
    printf("\nInforme o valor da cotação do dolar: R$");
    scanf("%f", &cotacao);
    
    reais = dolar * cotacao;
    
    printf("\nA quantidade de dolar convertido em real é: R$%.2f", reais);

    return 0;
}


//===========================================================================================================================================//

//  Exercício - 9

// Pergunta exercício 9
/*Construir um programa que leia três valores numéricos inteiros (representados pelas
variáveis A, B e C) e apresente como resultado final o valor do quadrado da soma dos
três valores lidos.*/

// Resposta exercício 9
#include <stdio.h>

int main()
{
    
    int A=0;
    int B=0;
    int C=0;
    int resultado;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    resultado = A*A + B*B + C*C;
    
    printf("O resultado final da soma dos tres é: %d", resultado);

    return 0;
}

//===========================================================================================================================================//

// Fim
