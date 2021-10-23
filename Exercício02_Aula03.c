#include <stdio.h>

int main()
{
    int Num1;
    int Num2;
    int Num3;
    
    printf("\nDigite o primeiro Número: ");
    
    scanf("%i", &Num1);
    
    printf("\nDigite o segundo Número: ");
    
    scanf("%i", &Num2);
    
    printf("\nDigite o terceiro Número: ");
    
    scanf("%i", &Num3);
    
    if (Num1 > Num2)
    {
        
        printf("O primeiro NÚMERO é maior que o segundo NÚMERO.");
        
    } else {
        
        if (Num2 < Num1){
            
            printf("O segundo NÚMERO é menor que o primeiro NÚMERO.");
            
        } else {
            
            if (Num2 > Num3){
                
                printf("O segundo NÚMERO é maior que o terceiro NÚMERO.");
                
            } else {
                
                if (Num3 < Num2){
                    
                    printf("O terceiro NÚMERO é menor que o segundo NÚMERO.");
                    
                }
                
            }
            
        }
     
    }
    
    return 0;
}
