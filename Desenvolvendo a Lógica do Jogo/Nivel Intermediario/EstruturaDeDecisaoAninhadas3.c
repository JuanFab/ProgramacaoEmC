#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0 ) {
        if (numero % 2 == 0) {
            printf("Numero par.\n");
        } else{
            printf("Numero impar.\n");
        }
        
    
    } else if (numero == 0) {
        printf("Numero é zero.\n");
    
    } else {
        printf("Numero é negativo.\n");
    }
    




    return 0;
}