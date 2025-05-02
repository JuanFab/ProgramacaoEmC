#include <stdio.h>

int main() { // Definir as variaveis
    unsigned int Estoque, EstoqueMinimo = 1000;
    float Temperatura, Umidade;

 // Entrar com os dados
    printf("Entre com a temperatura: \n");
    scanf("%f", &Temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &Umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &Estoque);
    printf("\n ***Registrando as informações...****\n");
    
    // Verdadeiro ou falso / Escolha
    if (Temperatura > 30.0) {
        printf("Alerta, a temperatura esta alta !!! \n");
    } 

    else {
        printf("A Temperatura esta dentro dos parametros. \n");
    }
    
    if (Umidade > 50.0) {
        printf("Umidade elevada. \n"); 
    } 
        
    else {
        printf("Umidade esta dentro dos parametros. \n");
    }

    if (Estoque < EstoqueMinimo) {
        printf("O estoque esta baixo do ideal !! \n");
    }

    else {
        printf("O estoque esta dentro dos parametros. \n");
    }

    

}