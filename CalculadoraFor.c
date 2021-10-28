#include <conio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sair() {
    int op;
    printf("\nDeseja fazer outra operação? \n");
    printf("Digite 1 para continuar ou 2 para sair: ");
    scanf("%i", &op);
    
    switch (op) {
        case 1:
            printf("\n\tContinuando... \n\n");
            break;
        break;
        
        case 2:
            printf("Saindo...");
            exit(0);
            break;
            
        default:
            printf("Opcao invalida! escolha uma opcao valida.");
            sair();
            break;
    }    
}

int main()
{
    float n1, n2;
    int opcao, i; 
	i=1;
	opcao=0;

	for (;;) {
	    
		printf("Calculadora \n\n\t1. Soma \n\t2. Subtraçao \n\t3. Multiplicacao \n\t4. Divisao \n\t5. Sair\n");
		printf("\nDigite sua opcao: ");
		scanf("%i", &opcao);
		
		if(opcao == 1){
		    
            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);
            printf("Segundo valor: ");
            scanf("%f", &n2);
            printf( "Resultado da soma: %5.2f \n", n1 + n2 );
            sair();
            
 		}else if(opcao == 2){
 		    
            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);
            printf("Segundo valor: ");
            scanf("%f", &n2);
            // sub = n1 - n2;
            printf( "Resultado da subtracao: %5.2f \n", n1 - n2 );
            sair();
            
		}else if(opcao == 3){
		    
            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);
            printf("Segundo valor: ");
            scanf("%f", &n2);
            printf( "Resultado da multiplicacao: %5.2f \n", n1 * n2 );
            sair();
            
		}else if(opcao == 4){
		    
            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);
            printf("Segundo valor: ");
            scanf("%f", &n2);
                if(n1 == 0 || n2 == 0){
                    printf("\ndivisao invalida! \n");
                    sair();
                } else{
                    printf( "Resultado da divisao: %5.2f \n", n1 / n2 );
                    sair();
                }
                
		}else if(opcao == 5){
		    return 0;
		}else{
			printf("Você digitou um opção invalida. Deseja sair? Digite 5: ");	
			scanf("%i", &opcao);
			if(opcao == 5){
			    return 0;
			}
		}
	}
	
	return 0;
}
