#include <stdio.h>

// Disciplina: Sistemas da Informa��o
// Professor: Sergio Cardoso
// Turma: 9002 
// Autor(a): Juan Fabio Martins Silva
// Data atual: 02/05 - 12:11

int main() {
	int opcao;
	float nota1, nota2, media;

	printf("\n **** Menu de Gerenciamento de Estudantes\n");
	printf("1. Calcular M�dia\n");
	printf("2. Determinar Status\n");
	printf("3. Sair\n");
	printf("Escolha uma op��o: ");
	scanf("%d", &opcao);

	switch (opcao) {
	case 1:
		printf("Calcular a M�dia\n");
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite a  segunda nota: \n");
		scanf("%f", &nota2);
		printf(" **** Salvando as notas... ****");

		// Testar a condi��o se a nota � >= 0 e <= 10
		if ( (nota1 >= 0  && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ) {
			media == (nota1 + nota2) /2;
			printf("A media � %.2f\n", media);

		} else {
			printf("Entrada com valores errados de notas.");
		}
	break;

	case 2:
		printf("Determinar Status\n");
		printf("Entrar com a m�dia: ");
		scanf("%f", &media);
		// media >= 5 ? printf("Aprovado.\n") : printf("Reprovado\n");

		if (media >= 7) {
			printf("Aprovado!\n");
		} else if (media >= 5) {
				printf("Recupera��o.");
		} else {
				printf("Reprovado.");
		}

	break;

	case 3:
		printf("Sair.\n");
		printf("**** Finalizando e saindo... ****\n");

	default:
		printf("Op��o invalida.");
	break;
	}
}