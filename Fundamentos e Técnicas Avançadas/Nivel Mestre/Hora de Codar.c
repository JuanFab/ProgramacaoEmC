#include <stdio.h>




int main() {
    // Declarar variaveis Produto, u i estoque, double valor unitario, double valor
    //u i quantidade minima
        char ProdutoA[30] = "Produto A";
        char ProdutoB[30] = "Produto B";


        unsigned int EstoqueA = 1000; // Quantidade de produto no estoque
        unsigned int EstoqueB = 2000;

        float ValorA = 10.50;
        float ValorB = 20.40;

        unsigned int EstoqueMinimoA = 500;
        unsigned int EstoqueMinimoB = 3000;

        double ValorTotalA;
        double ValorTotalB;

        int ResultadoA, ResultadoB;
        ;


    // Exibir as informações dos produtos
        printf("Produto %s tem: %u produto em estoque, no valor unitario de: %.2f\n", ProdutoA, EstoqueA,ValorA);
        printf("Produto %s tem: %u produto em estoque, no valor unitario de: %.2f\n", ProdutoB, EstoqueB,ValorB);


    // Comparações entre os valores totais dos produtos

        ResultadoA = EstoqueA > EstoqueMinimoA;
        ResultadoB = EstoqueB > EstoqueMinimoB;

        printf("O produto %s tem estoque minimo de: %d\n",ProdutoA, ResultadoA);
        printf("O produto %s tem estoque minimo de: %d\n",ProdutoB, ResultadoB);

    // Comparação entre os valores totais do produto

        printf("Valor total de A (R$ %.2f): é maior que o total de B (R$ %.2f): %d\N", 
            EstoqueA * ValorA,
            EstoqueB * ValorB,
            (EstoqueA * ValorA) > (EstoqueB * ValorB));


    return 0;
}