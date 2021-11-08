#include <stdio.h>

int main()
{

    int Notas[4];
    int i;
    
    for(i=0; i<4; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &Notas[i]);
    }
    
    for(i=0; i<4; i++) {
        printf("\nO valor da %dº posição é: %d", i+1, Notas[i]);
    }
    
    return 0;
}
