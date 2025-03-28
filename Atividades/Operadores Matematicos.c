#include <stdio.h>


/* Operadores Aritmeticos */
/*  Soma (+) - Subtração (-) - Multiplicação (*) - Divisão (/)*/

int main(){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);
    //Operação Soma
    soma = numero1 + numero2;

    //Operação Subtração
    subtracao = numero1 - numero2;

    //Operação Multiplicação
    multiplicacao = numero1 * numero2;

    //Operação Divisão
    divisao = numero1 / numero2;

    printf(" O Resultado da Soma é: %d \n");
    printf(" O Resultado da Subtração é: %d \n");
    printf(" O Resultado da Multiplicação é: %d \n");
    printf(" O Resultado da Divisão é: %d \n");

}
