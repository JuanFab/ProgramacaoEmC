#include	<stdio.h>

int main() {
	
	int numero;

	do {
		printf("Digite um numero par para sair do programa...");
		scanf("%d", numero);

		if (numero % 2 == 0) {
			printf("%d � par!\n", numero);
		} else {
			printf("%d O numero � Impar\n", numero);
		}


	} while (numero % 2 != 0);

	printf("Voce digitou um numero par, saindo do programa...");

	return 0;
}