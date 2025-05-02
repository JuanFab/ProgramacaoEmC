#include <stdio.h>

int main() {
    int opcao;

    printf("Menu Principal. \n");
    printf("1. Iniciar Jogo. \n");
    printf("2. Ver Regras.\n");
    printf("3. Sair. \n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

switch (opcao) {
case 1:
    printf(" ***O Jogo esta sendo executado... por favor, aguarde. ***");
break;

case 2:
    printf("Regras: .....");
break;

case 3:
    printf("Salvando e saindo do jogo...");
break;

default:
    printf("Opção Invalida.");
break;
}




    return 0;
}