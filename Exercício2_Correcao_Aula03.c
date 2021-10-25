#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1;
    int Num2;
    int Num3;
    int NumMaior;
    int NumMenor;
    
    printf("\nDigite o valor de N1: ");
    scanf("%i", &Num1);
    
    printf("\nDigite o valor de N2: ");
    scanf("%i", &Num2);
    
    printf("\nDigite o valor de N3: ");
    scanf("%i", &Num3);
    
    if (Num1 < Num2) {
        
        NumMenor = Num1;
        
    } else {
        
        NumMenor = Num2;
        
    } 
    
    if (Num1 < Num3) {
        
        NumMenor = Num1;
        
    } else {
        
        NumMenor = Num3;
        
    }
  
    if (Num2 < Num3) {
        
        NumMenor =  Num2;
        
    } else {
        
        NumMenor = Num3;
        
    }
    
    if (Num1 > Num2) {
        
        NumMaior = Num1;
        
    } else {
        
        NumMaior = Num2;
        
    } 
    
    if (Num2 > Num3) {
        
        NumMaior = Num2;
        
    } else {
        
        NumMaior = Num3;
        
    }
    
    printf("\nO número maior é: %i \nO menor é: %i", NumMaior, NumMenor);
    return 0;
}
