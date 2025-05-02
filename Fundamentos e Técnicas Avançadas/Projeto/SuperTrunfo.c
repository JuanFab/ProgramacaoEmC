#include <stdio.h>

int main() {
    char Opcao1[5], Opcao2[5], Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, PontoTuristico1, PontoTuristico2;
    float Area1, Area2, PIB1, PIB2, DensidadePopulacional1, DensidadePopulacional2, PIBpercapita1, PIBpercapita2;


       // Entrada de dados primera carta
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

       // Calculo PIB per capita e Densidade Populacional
              DensidadePopulacional1 = (float) Populacao1/Area1;
              PIBpercapita1 = PIB1/Populacao1;


       // Entrada de dados segunda carta
               printf("\n Digite o código da segunda carta: ");
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

       // Calculo PIB per capita e Densidade Populacional da segunda carta
               DensidadePopulacional2 = (float) Populacao2/Area2;
               PIBpercapita2 = PIB2/Populacao2;



       // Exibição carta 1 e 2
           printf("\n *** Carta 1 *** \n");
           printf("Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n Densidade Populacional: %.2f \n PIB per capita: %.2f \n", 
           Opcao1, Cidade1, Populacao1, Area1, PIB1, PontoTuristico1, DensidadePopulacional1, PIBpercapita1);

           printf("\n *** Carta 2 *** \n");
           printf("Código: %s \n Nome do Estado: %s \n População: %d \n Área: %.3f \n PIB: %.3f \n Pontos turísticos: %d \n Densidade Populacional: %.3f \n PIB Per Capita: %.2f \n", 
           Opcao2, Cidade2, Populacao2, Area2, PIB2, PontoTuristico2, DensidadePopulacional2, PIBpercapita2);   


        // Calculo SuperPoder carta 1 e 2

        float SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + PIBpercapita1 + PontoTuristico1;
        float SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + PIBpercapita2 + PontoTuristico2;

        // Calculo Densidade Inversa

        float InversoDensidade1 = (DensidadePopulacional1 > 0) * (1 / DensidadePopulacional1);
        float InversoDensidade2 = (DensidadePopulacional2 > 0) * (1 / DensidadePopulacional2);
    
    // Exibição do vencedor da comparação

    printf("\n **** Comparação de status da carta **** \n");
    printf(" Resultado da comparação da População: Carta %d\n", (Populacao1 > Populacao2) * 1 + (Populacao1 <= Populacao2) * 2);
    printf(" Resultado da comparação da Area: Carta %d\n", (Area1 > Area2) * 1 + (Area1 <= Area2) * 2);
    printf(" Resultado da comparação da PIB: Carta %d\n", (PIB1 > PIB2) * 1 + (PIB1 <= PIB2) * 2);
    printf(" Resultado da comparação da Ponto Turistico: Carta %d\n", (PontoTuristico1 > PontoTuristico2) * 1 + (PontoTuristico1 <= PontoTuristico2) * 2);
    printf(" Resultado da comparação da Densidade Populacional: Carta %d\n", (DensidadePopulacional1 > DensidadePopulacional2) * 1 + (DensidadePopulacional1 <= DensidadePopulacional2) * 2);
    printf(" Resultado da comparação da PIB Per Capita: Carta %d\n", (PIBpercapita1 > PIBpercapita2) * 1 + (PIBpercapita1 <= PIBpercapita2) * 2);
    printf(" Resultado da comparação da Super Poder: Carta %d\n", (SuperPoder1 > SuperPoder2) * 1 + (SuperPoder1 <= SuperPoder2) * 2);

    
        return 0;
}
