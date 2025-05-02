#include <stdio.h>

// Disciplina: Sistemas da Informação
// Professor: Sergio Cardoso
// Turma: 9002 
// Autor(a): Juan Fabio Martins Silva
// Data atual: 28/04 - 14:12

int main(){
    int num1 = 40, num2 = 60;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    if (num1 > num2) {
        printf("O numero maior é: %d\n", num1);
    } else {
        printf("O numero maior é: %d\n", num2);
    }

    
    
    
    

    return 0;
}