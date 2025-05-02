#include <stdio.h>

int main(){


int numeroNormal = 2147483647; // Valor maximo de int
long long int numeroGrande = 2147483647;

printf("Numero regular (int): %d\n", numeroNormal);
printf("Numero grande (longe int): %lld\n", numeroGrande);


numeroGrande = 2147483648; // Valor maior que o maximo de int
printf("Numero grande atualizado (long int): %lld\n", numeroGrande);

return 0;

}