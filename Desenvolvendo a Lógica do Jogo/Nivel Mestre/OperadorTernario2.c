#include <stdio.h>

// Disciplina: Sistemas da Informação
// Professor: Sergio Cardoso
// Turma: 9002 
// Autor(a): Juan Fabio Martins Silva
// Data atual: 28/04 - 13:56

int main(){
    int temperatura = 10;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0 ;

    if (resultado == 1) {
        printf("Está calor\n");
    } else {
        printf("Esta frio\n");
    }
    

    

    
    return 0;
}