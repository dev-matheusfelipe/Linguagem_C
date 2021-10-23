#include <stdio.h>

int main()
{
    int Num;
    
    printf("\nDigite um número inteiro: ");
    
    scanf("%i", &Num);
    
    if (Num == 0)
    {
        
        printf("Número digitado é igual a ZERO.");
        
    } else {
        
        if ( Num > 0 ){
            
            printf("O número digitado é POSITIVO.");
            
        } else {
            
            printf("O número digitado é NEGATIVO.");
            
        }
     
    }
    
    return 0;
}
