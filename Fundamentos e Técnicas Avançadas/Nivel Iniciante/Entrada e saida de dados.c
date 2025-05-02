#include <stdio.h>

/*
printf("%formato1 %formato2 %formato3", variavel1,variavel2,variavel 3, ...)

%d: Imprime um inteiro no formato decimal.
%i Equivalente a %d
%f: Imprime um numero de ponto flutuante no formato padrão.
%e: Imprime um numero de ponto flutuante na notação cientifica
%c: Imprime um unico caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/

int main(){
    int idade = 20;
    float altura = 1.67;
    float peso = 67.5;
    char nome[20] = "Juan"; 
    char opcao = 'J';


/* Sintaxe scanf
scanf("formato1","formato2","formato3", &variavel1, &variavel2, &variavel3)*/
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite o seu peso:\n");
    scanf("%f", &peso);
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);




    printf("A idade do %s é: %d\n", nome, idade);
    printf("O peso do %s é : %.2f\n", nome, peso);
    printf("A altura é: %.2f\n", altura);
    printf("A opcao é: %c\n", opcao);
}
