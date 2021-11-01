//Lista de Exercícios - Algoritmos

//  Exercício - 1

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
