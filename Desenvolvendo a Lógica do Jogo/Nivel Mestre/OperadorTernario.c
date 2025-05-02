#include <stdio.h>

// Disciplina: Sistemas da Informação
// Professor: Sergio Cardoso
// Turma: 9002 
// Autor(a): Juan Fabio Martins Silva
// Data atual: 28/04 - 13:20

int main(){
    int idade = 20;
    int resultado;


    resultado = idade >= 18 ? 1 : 0 ;


    if (resultado == 1) {
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }
    
    



 return 0;
}