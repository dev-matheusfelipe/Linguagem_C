#include <stdio.h>
#include <stdlib.h>

void soma() {
    int valor1, valor2, result;
    printf("\nDigite um número: ");
    scanf("%i", &valor1);
    printf("Digite outro número: ");
    scanf("%i", &valor2);
    result = valor1 + valor2;
    printf("Resultado: %i\n\n", result);
}

void subtrai() {
    int valor1, valor2, result;
    printf("\nDigite um número: ");
    scanf("%i", &valor1);
    printf("Digite outro número: ");
    scanf("%i", &valor2);
    result = valor1 - valor2;
    printf("Resultado: %i\n\n", result);
}

void divide() {
    int valor1, valor2, result;
    printf("\nDigite um número: ");
    scanf("%i", &valor1);
    printf("Digite outro número: ");
    scanf("%i", &valor2);
    result = valor1 / valor2;
    printf("Resultado: %i\n\n", result);
}

void Multiplica() {
    int valor1, valor2, result;
    printf("\nDigite um número: ");
    scanf("%i", &valor1);
    printf("Digite outro número: ");
    scanf("%i", &valor2);
    result = valor1 * valor2;
    printf("Resultado: %i\n\n", result);
}

void menu() {
    
    int escolha;
    
    printf("Escolha uma operação matemática:\n");
    printf("\t1. Soma\n");
    printf("\t2. Subtração\n");
    printf("\t3. Divisão\n");
    printf("\t4. Multiplicação\n");
    
    printf("Escolha o número da operação: ");
    scanf ("%d", &escolha);
    
    switch (escolha) {
        case 1:
            soma();
        break;
        
        case 2:
            subtrai();
        break;
        
        case 3:
            divide();
        break;
        
        case 4:
            Multiplica();
        break;
    }
    
}

int main () {
    menu();
    return 0;
}
