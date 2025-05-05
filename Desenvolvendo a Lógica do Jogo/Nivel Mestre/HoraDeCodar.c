#include <stdio.h>

int main() {

	int numeroJogador, numeroComputador, resultado;
	char tipoComparacao;

	// Gerar numero aleatorio
	srand(time(0));
	numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100

	// Inicio do Jogo

	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n");
	printf("Voc� deve escolher um numero e o tipo de compara��o.\n");
	printf("M. Maior\n");
	printf("N. Menor\n");
	printf("I. Igual\n");

	printf("Escolha a compara��o: \n");
	scanf("%c", &tipoComparacao);

	printf("Digite seu n�mero (entre 1 e 100): ");
	scanf("%d", &numeroJogador);

	// Exibir n�mero do computador
	// printf("O n�mero do computador �: %d\n", numeroComputador);

	// Menu 

	switch (tipoComparacao) {
	case 'M':
	case 'm':
		printf("Voc� escolheu a op��o maior!\n");
		resultado = numeroJogador > numeroComputador ? 1 : 0;
		


		break;

	case 'N':
	case 'n':
		printf("Voc� escolheu a op��o menor!\n");
		resultado = numeroJogador <  numeroComputador ? 1 : 0;
		

		break;
		
	case 'I':
	case 'i':
		printf("Voc� escolheu a op��o igual!\n");
		resultado = numeroJogador == numeroComputador ? 1 : 0;


		break;

	default:
		printf("Op��o Invalida.");
		break;
	}

	printf("O n�mero do computador �: %d e o do jogador �: %d\n", numeroComputador, numeroJogador);

	if (resultado == 1) {
		printf("Parabens, voc� venceu!");
	} else {
		printf("Infelizmente, voc� perdeu!");
	}


	return 0;
}