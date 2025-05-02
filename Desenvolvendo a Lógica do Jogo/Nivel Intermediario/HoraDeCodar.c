#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    // Exibição.
    printf("*** Iniciando o jogo... ***\n");
    printf("Jogo de Jokenpô \n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");
    printf("\nEscolha: \n");
    scanf("%d", &escolhaJogador);


    // Escolha computador.
    escolhaComputador = rand() % 3 + 1;

    // Escolha e opções do jogador.
    switch (escolhaJogador) {
    case 1:
    printf("Jogador: Pedra - ");
    break;

    case 2:
    printf("Jogador: Papel - ");
    break;

    case 3:
    printf("Jogador: Tesoura - ");
    break;
    
    default:
    printf("Opção Invalida. \n");
       break;
    }

    // Escolha e opções do computador.
    switch (escolhaComputador) {
        case 1:
        printf("\nComputador: Pedra \n");
        break;
    
        case 2:
        printf("\nComputador: Papel  \n");
        break;
    
        case 3:
        printf("\nComputador: Tesoura  \n");
        break;
    }

 if (escolhaComputador == escolhaJogador) {
    printf("\n*** O Resultado foi... empate. *** \n");
 } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
           (escolhaJogador == 2) && (escolhaComputador == 1) ||
           (escolhaJogador == 3) && (escolhaComputador == 2))
 {
    printf("\n**** Calculando resultados... ****\n");
    printf("\n Parabens, Voce ganhou !!! \n");
    printf("\n***Encerrando o programa...***\n");

 }else{
    printf("\n**** Calculando resultados... ****\n");
    printf("\n Infelizmente, Voce perdeu !!! \n");
    printf("\n***Encerrando o programa...***\n");
 }
 
 



    return 0;
}