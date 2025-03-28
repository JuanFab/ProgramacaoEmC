#include <stdio.h>

int main() {
    char Opcao1[4], Opcao2[4];
    int Populacao1, Populacao2, PontoTuristico1, PontoTuristico2;
    float Area1, Area2, PIB, PIB2;

    // Entrada de dados primera carta
    printf("Digite o código da primeira carta: ");
    scanf("%s", Opcao1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área: ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos turísticos: ");
    scanf("%d", &PontoTuristico1);

    // Entrada de dados segunda carta
    printf("Digite o código da segunda carta: \n");
    scanf("%s", Opcao2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área: ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &PontoTuristico2);

       // Exibição
    printf("\n*** Carta 1 *** \n");
    printf("Código: %s \n População: %d \n Área: %.3f \n PIB: %.3f \n Pontos turísticos: %d \n", 
           Opcao1, Populacao1, Area1, PIB, PontoTuristico1);

    printf("\n *** Carta 2 *** \n");
    printf("Código: %s \n População: %d \n Área: %.3f \n PIB: %.3f \n Pontos turísticos: %d \n", 
           Opcao2, Populacao2, Area2, PIB2, PontoTuristico2);

    return 0;
}
