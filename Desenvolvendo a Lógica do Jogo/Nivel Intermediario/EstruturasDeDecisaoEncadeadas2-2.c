#include <stdio.h>

int main() {
    int idade;


    // Idoso = 60
    // Adulto 18 >=  60
    // Adolescente 12 <= 18
    // Criança = < 12

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade > 60) {
        printf(" Voce é um idoso.\n");
    } else if (idade >= 18 && idade <= 60) {
        printf("Voce é um adulto.");
    } else if (idade < 18 && idade > 12 ) {
        printf("Voce é um adolescente.");
    } else {
        printf("Voce é uma criança.");
    }
    
    
 return 0;
}