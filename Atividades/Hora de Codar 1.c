#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Idade do aluno: %d  - Matricula do aluno: %d - ", nome, matricula);
    printf(" Nome do Aluno: %s - Altura do Aluno: %f", nome, altura);

    return 0;
}
