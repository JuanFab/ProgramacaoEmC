#include <stdio.h>

/* unsigned - usado para declarar variaveis que podem armazenar apenas valores positivos incluindo o zero.
int: -2,147,483,648 a 2,147,483,647
unsigned int: 0 a 4,294,967,295
char: -128 a 127
unsigned char: 0 a 255
*/


int main() {

int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
unsigned int numeroSemSinal = 3000000000;

printf("Número com sinal: %d\n", numeroSinal);
printf("Numero sem sinal: %d\n", numeroSemSinal);



return 0;

}




