#include <stdio.h>

int main() {
    char variavel;

    printf("Digite o valor:");
    scanf("%c", &variavel);

    switch (variavel) {
    case 'a':
        printf(" Codigo a ser executado se variavel == a \n");
        printf(" Teste case a\n");
        break;
    
    case 'b':
        printf(" Codigo a ser executado se variavel == b \n");
        printf(" Teste case b\n");
        break;

    default:
        printf("Codigo a ser executado a variavel se nao for 1 ou 2");

    }





    return 0;
}