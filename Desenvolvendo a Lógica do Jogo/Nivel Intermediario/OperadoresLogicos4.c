#include <stdio.h>

int main() {

    int idade = 17;
    float altura = 1.75;

    //idade >= 18 => Verdadeira
    //idade <= 30 => Verdadeira
    // Verdadeira && Verdadeira
    // Verdadeira && altura > 1.70 
    //Verdadeiro && Verdadeiro => Verdadeiro

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Voce esta na faixa etária e tem a altura adequada.\n");
    
    } else {
        printf("Você nao atende aos critérios\n");
    }
    

 return 0;
}