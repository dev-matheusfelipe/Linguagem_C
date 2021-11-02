//Lista de Exercícios - Algoritmos

// EXERCÍCIO  1 

// Pergunta exercício 1
//O proprietário da empresa ABC LTDA precisa de um programa de computador para
//calcular o novo salário que seus funcionários irão receber a partir do mês que vem.
//Sabendo que o aumento de salário para todos os funcionários será de 25%, faça um
//programa que lê o valor do salário atual do funcionário e informa o seu novo salário
//acrescido de 25%.

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
//Um dos sócios da empresa XYZ LTDA ficou sabendo que você desenvolveu um
//programa de reajuste salarial para a empresa ABC LTDA e pediu que você desenvolva
//um programa similar. Na verdade ele está pedindo que você acrescente ao programa
//anterior à possibilidade dele informar não somente o salário atual do funcionário, mas
//também o valor percentual que deve ser incrementado para aquele funcionário, pois
//ele irá aplicar valores percentuais diferentes a cada funcionário.

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
//Crie um programa que lê o ano de nascimento de uma pessoa e o ano atual. Calcule e
//mostre qual é: a idade da pessoa em anos, a idade da pessoa em meses, a idade da
//pessoa em dias e a idade da pessoa em semanas.
    
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
//Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os
//quais fornece a quantidade de ração em gramas. A quantidade diária de ração
//fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do
//saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
//quanto restará de ração no saco após cinco dias.
    
// Resposta exercício 4
