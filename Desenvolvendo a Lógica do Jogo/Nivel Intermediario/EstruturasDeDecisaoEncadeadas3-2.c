#include <stdio.h>

int main() {

    int nota;

    // F 
    // D >= 60
    // C >= 70
    // B >= 80
    // A >= 90

 printf("Digite a sua nota: ");
 scanf("%d", &nota);

 if (nota < 60) {
    printf("Sua nota é: 'F'.\n");
 
} else if (nota >= 60 && nota < 70){
    printf("Sua nota é: 'D'.\n");

} else if (nota >= 70 && nota < 80) {
    printf("Sua nota é: 'C'.\n");

} else if (nota >= 80 && nota < 90) {
    printf("Sua nota é 'B'\n");

} else if (nota >= 90 && nota < 100) {
    printf("Sua nota é: 'A'.\n");

} else {
    printf("Sua nota é 'S' !!\n");
}




 


    return 0;
}