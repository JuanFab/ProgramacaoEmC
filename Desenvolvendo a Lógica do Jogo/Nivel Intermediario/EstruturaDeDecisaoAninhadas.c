#include <stdio.h>

int main() {
    int idade;
    float renda;

    /* if (condicao1) {
        if(condicao2) {
            // Esse Código a ser executado se condicao1 e condicao2 forem verdadeiras
            } else {
         
        }
    }
        
    */

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal:");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) 
    { 
        if (renda < 2000 ) 
        {
            printf("Voce tem direito ao desconto.\n");
        
        } else {
            printf("Voce nao atende aos criterios devido a renda mensal.\n");
        } 

        } else {
        printf("Voce nao atende aos criterios devido a idade.\n");
        }

    }




