#include <stdio.h>

int main() {

	int numeroJogador, numeroComputador, resultado;
	char tipoComparacao;

	// Gerar numero aleatorio
	srand(time(0));
	numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100

	// Inicio do Jogo

	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n");
	printf("Você deve escolher um numero e o tipo de comparação.\n");
	printf("M. Maior\n");
	printf("N. Menor\n");
	printf("I. Igual\n");

	printf("Escolha a comparação: \n");
	scanf("%c", &tipoComparacao);

	printf("Digite seu número (entre 1 e 100): ");
	scanf("%d", &numeroJogador);

	// Exibir número do computador
	// printf("O número do computador é: %d\n", numeroComputador);

	// Menu 

	switch (tipoComparacao) {
	case 'M':
	case 'm':
		printf("Você escolheu a opção maior!\n");
		resultado = numeroJogador > numeroComputador ? 1 : 0;
		


		break;

	case 'N':
	case 'n':
		printf("Você escolheu a opção menor!\n");
		resultado = numeroJogador <  numeroComputador ? 1 : 0;
		

		break;
		
	case 'I':
	case 'i':
		printf("Você escolheu a opção igual!\n");
		resultado = numeroJogador == numeroComputador ? 1 : 0;


		break;

	default:
		printf("Opção Invalida.");
		break;
	}

	printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

	if (resultado == 1) {
		printf("Parabens, você venceu!");
	} else {
		printf("Infelizmente, você perdeu!");
	}


	return 0;
}