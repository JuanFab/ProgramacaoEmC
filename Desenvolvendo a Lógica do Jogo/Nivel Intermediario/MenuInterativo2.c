#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal. \n");
    printf("1. Iniciar Jogo. \n");
    printf("2. Ver Regras.\n");
    printf("3. Sair. \n");
    printf("\nEscolha uma opção: \n");
    scanf("%d", &opcao);

switch (opcao) {
case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("**** Iniciando o jogo, por favor, aguarde... ****\n");
    printf("Digite um numero de 0 a 9: ");
    scanf("%d", &palpite);
    
    if (numeroSecreto == palpite){
        printf("Voce acertou, o tigrinho soltou a carta.\n");
        printf("Numero secreto: %d\n", numeroSecreto);
    
    } else {
        printf("Voce errou.\n");
        printf("Numero secreto: %d\n", numeroSecreto);
    }

break;\

case 2:
    printf("A explicação das regras.\n");
    printf("Digite a opção relacionada as regras do jogo!\n");
    scanf("%d", &regras);

    switch (regras){
    case 1:
        printf("Regra 1");
    break;
    
    case 2:
        printf("Regra 2");
    break;
    
    default:
        printf("Opção Inválida.");
    break;
    }
break;

case 3:
    printf("Salvando e saindo do jogo...");
break;
    
default:
    printf("Opção Invalida.\n");
break;
}


return 0;
} 