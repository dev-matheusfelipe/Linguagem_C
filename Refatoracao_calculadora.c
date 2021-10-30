#include <stdio.h>
#include <stdlib.h>

int operacao(int escolha, int valor1, int valor2) {
    
    if (escolha == 1){
        
        return valor1 + valor2;
        
    } else if (escolha == 2) {
        
        return valor1 - valor2;
        
    } else if (escolha == 3) {
       
        return valor1 / valor2;
        
    } else {
        
        return valor1 * valor2;
        
    }
    
}

int main () {
    
    int escolha, valor1, valor2, result;
    printf("Escolha uma operação matemática:\n");
    printf("\t1. Soma\n");
    printf("\t2. Subtração\n");
    printf("\t3. Divisão\n");
    printf("\t4. Multiplicação\n");
    
    printf("Escolha o número da operação: ");
    scanf ("%d", &escolha);
    
    printf("\nDigite um número: ");
    scanf("%i", &valor1);
    printf("Digite outro número: ");
    scanf("%i", &valor2);
    
    switch (escolha) {
        case 1:
            result = operacao(escolha, valor1, valor2);
            printf("A soma é %i", result);
        break;
        
        case 2:
            result = operacao(escolha, valor1, valor2);
            printf("A subtracao é %i", result);
        break;
        
        case 3:
            result = operacao(escolha, valor1, valor2);
            printf("A divisao é %i", result);
        break;
        
        case 4:
            result = operacao(escolha, valor1, valor2);
            printf("A Multiplicao é %i", result);
        break;
        
        default:
            printf("Error");
    }
    
    return 0;
}
