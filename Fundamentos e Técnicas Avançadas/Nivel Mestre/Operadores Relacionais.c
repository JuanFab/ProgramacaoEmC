#include <stdio.h>

// a > b (maior que) Exemplo: se A é maior que B vai retornar 1
// a < b (menor que) Exemplo: O operador vai verificar se o valor a esquerda é menor que o da direita.
// a = b (maior ou igual a) Vai verificar se o operador da esquerda é maior ou igual ao operador da direita
// a <= b(menor ou igual a) Vai verificar se o valor da esquerda é menor ou igual ao valor da direita.
// a == b (igual a) Vai verificar se o valor da esquerda ou direita sao iguais.
// a != b (diferende de) O operador verifica se o valor da esquerda ou direita sao diferentes.

int main() {

    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a >= b);
    printf("a < b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);


    return 0;

}