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
    DensidadePopulacional1 = (float)Populacao1 / Area1;

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
    DensidadePopulacional2 = (float)Populacao2 / Area2;

    // Exibição das cartas
    printf("\n *** Carta 1 *** \n");
    printf(" Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n Densidade Populacional: %.2f \n",
        Opcao1, Cidade1, Populacao1, Area1, PIB1, PontoTuristico1, DensidadePopulacional1);

    printf("\n *** Carta 2 *** \n");
    printf(" Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n Densidade Populacional: %.2f \n",
        Opcao2, Cidade2, Populacao2, Area2, PIB2, PontoTuristico2, DensidadePopulacional2);

    // Menu interativo de comparação
    printf("\n Escolha o primeiro atributo para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Comparação do primeiro atributo usando switch
    float AtributoCidade1 = 0, AtributoCidade2 = 0; // Variáveis para armazenar os atributos comparados
    switch (opcao) {
    case 1:
        printf("\n ***** Comparação - População ***** \n");
        printf("%s: %d habitantes\n", Cidade1, Populacao1);
        printf("%s: %d habitantes\n", Cidade2, Populacao2);
        AtributoCidade1 = Populacao1;
        AtributoCidade2 = Populacao2;
        break;

    case 2:
        printf("\n ***** Comparação - Área ***** \n");
        printf("%s: %.2f km²\n", Cidade1, Area1);
        printf("%s: %.2f km²\n", Cidade2, Area2);
        AtributoCidade1 = Area1;
        AtributoCidade2 = Area2;
        break;

    case 3:
        printf("\n ***** Comparação - PIB ***** \n");
        printf("%s: %.2f\n", Cidade1, PIB1);
        printf("%s: %.2f\n", Cidade2, PIB2);
        AtributoCidade1 = PIB1;
        AtributoCidade2 = PIB2;
        break;

    case 4:
        printf("\n ***** Comparação - Pontos Turísticos ***** \n");
        printf("%s: %d pontos\n", Cidade1, PontoTuristico1);
        printf("%s: %d pontos\n", Cidade2, PontoTuristico2);
        AtributoCidade1 = PontoTuristico1;
        AtributoCidade2 = PontoTuristico2;
        break;

    case 5:
        printf("\n ***** Comparação - Densidade Populacional (vence o menor) ***** \n");
        printf("%s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
        printf("%s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
        AtributoCidade1 = DensidadePopulacional1;
        AtributoCidade2 = DensidadePopulacional2;
        break;

    default:
        printf("\nOpção inválida!\n");
        return 0;  // Encerra o programa em caso de opção inválida
    }

    // Escolha do segundo atributo para comparar
    printf("\n Escolha o segundo atributo para comparar (não pode ser o mesmo do primeiro): \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Comparação do segundo atributo usando switch
    float AtributoCidade1_2 = 0, AtributoCidade2_2 = 0; // Variáveis para armazenar o segundo atributo comparado
    switch (opcao) {
    case 1:
        printf("\n ***** Comparação - População ***** \n");
        printf("%s: %d habitantes\n", Cidade1, Populacao1);
        printf("%s: %d habitantes\n", Cidade2, Populacao2);
        AtributoCidade1_2 = Populacao1;
        AtributoCidade2_2 = Populacao2;
        break;

    case 2:
        printf("\n ***** Comparação - Área ***** \n");
        printf("%s: %.2f km²\n", Cidade1, Area1);
        printf("%s: %.2f km²\n", Cidade2, Area2);
        AtributoCidade1_2 = Area1;
        AtributoCidade2_2 = Area2;
        break;

    case 3:
        printf("\n ***** Comparação - PIB ***** \n");
        printf("%s: %.2f\n", Cidade1, PIB1);
        printf("%s: %.2f\n", Cidade2, PIB2);
        AtributoCidade1_2 = PIB1;
        AtributoCidade2_2 = PIB2;
        break;

    case 4:
        printf("\n ***** Comparação - Pontos Turísticos ***** \n");
        printf("%s: %d pontos\n", Cidade1, PontoTuristico1);
        printf("%s: %d pontos\n", Cidade2, PontoTuristico2);
        AtributoCidade1_2 = PontoTuristico1;
        AtributoCidade2_2 = PontoTuristico2;
        break;

    case 5:
        printf("\n ***** Comparação - Densidade Populacional (vence o menor) ***** \n");
        printf("%s: %.2f hab/km²\n", Cidade1, DensidadePopulacional1);
        printf("%s: %.2f hab/km²\n", Cidade2, DensidadePopulacional2);
        AtributoCidade1_2 = DensidadePopulacional1;
        AtributoCidade2_2 = DensidadePopulacional2;
        break;

    default:
        printf("\n Opção inválida!\n");
        break;
    }

    // Soma dos Atributos
    printf("\n***** Comparação*****\n");
    float somaCidade1 = AtributoCidade1 + AtributoCidade1_2;
    float somaCidade2 = AtributoCidade2 + AtributoCidade2_2;

    // Exibe o vencedor com base na soma dos atributos
    if (somaCidade1 > somaCidade2) {
        printf("Resultado Final: %s venceu!\n", Cidade1);
    }
    else if (somaCidade1 < somaCidade2) {
        printf("Resultado Final: %s venceu!\n", Cidade2);
    }
    else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}
