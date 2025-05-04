#include <stdio.h>


// Disciplina: Sistemas da Informação
// Professor: Sergio Cardoso
// Turma: 9002 
// Autor(a): Juan Fabio Martins Silva
// Data atual: 28/04 - 11:30


int main() {
    char Opcao1[7], Opcao2[7], Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, PontoTuristico1, PontoTuristico2;
    float Area1, Area2, PIB1, PIB2, DensidadePopulacional1, DensidadePopulacional2;
    int opcao;

    // Entrada de dados primeira carta
    printf("****** Iniciando o Super Trunfo... ******\n");
    printf("Digite o código da primeira carta: ");
    scanf("%s", Opcao1);

    printf("Digite o nome do estado: ");
    scanf("%s", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área: ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ");
    scanf("%d", &PontoTuristico1);

    printf("****** Registrando os dados... ******");

    DensidadePopulacional1 = (float) Populacao1 / Area1;

    // Entrada de dados segunda carta
    printf("\nDigite o código da segunda carta: ");
    scanf("%s", Opcao2);

    printf("Digite o nome do estado: ");
    scanf("%s", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área: ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &PontoTuristico2);

    printf("****** Registrando os dados... ******");

    DensidadePopulacional2 = (float) Populacao2 / Area2;

    // Exibição das cartas
    printf("\n *** Carta 1 *** \n");
    printf(" Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n Densidade Populacional: %.2f \n",
           Opcao1, Cidade1, Populacao1, Area1, PIB1, PontoTuristico1, DensidadePopulacional1);

    printf("\n *** Carta 2 *** \n");
    printf(" Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n Densidade Populacional: %.2f \n",
           Opcao2, Cidade2, Populacao2, Area2, PIB2, PontoTuristico2, DensidadePopulacional2);

    // Menu interativo de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Comparação usando switch
    switch(opcao) {
        case 1:
            printf("\n ***** Comparação - População ***** \n");
            printf("%s: %d habitantes\n", Cidade1, Populacao1);
            printf("%s: %d habitantes\n", Cidade2, Populacao2);
            if (Populacao1 > Populacao2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else {
                if (Populacao2 > Populacao1) {
                    printf("Resultado: %s venceu!\n", Cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("\n ***** Comparação - Área ***** \n");
            printf("%s: %.2f km²\n", Cidade1, Area1);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            if (Area1 > Area2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else {
                if (Area2 > Area1) {
                    printf("Resultado: %s venceu!\n", Cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("\n ***** Comparação - PIB ***** \n");
            printf("%s: %.2f\n", Cidade1, PIB1);
            printf("%s: %.2f\n", Cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else {
                if (PIB2 > PIB1) {
                    printf("Resultado: %s venceu!\n", Cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("\n ***** Comparação - Pontos Turísticos ***** \n");
            printf("%s: %d pontos\n", Cidade1, PontoTuristico1);
            printf("%s: %d pontos\n", Cidade2, PontoTuristico2);
            if (PontoTuristico1 > PontoTuristico2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else {
                if (PontoTuristico2 > PontoTuristico1) {
                    printf("Resultado: %s venceu!\n", Cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("\n ***** Comparação - Densidade Populacional (vence o menor) ***** \n");
            printf("%s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
            printf("%s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) {
                printf("Resultado: %s venceu!\n", Cidade1);
            } else {
                if (DensidadePopulacional2 < DensidadePopulacional1) {
                    printf("Resultado: %s venceu!\n", Cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

    printf("\n **** Programa Finalizado. ****\n");



    return 0;
}
