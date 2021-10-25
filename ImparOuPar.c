#include <stdio.h>
int main()
{
    int x;
    
    printf("Escreva um número inteiro:");
    scanf("%d",&x);

    if (x >= 0 && x % 2 == 0) {
        
        printf("O número é positivo e par\n");
        
    } else {
        
        printf("O número é negativo ou ímpar\n");
        
    }
    
}
