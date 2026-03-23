//6) Escreva um programa que leia um número inteiro e imprima o seu antecessor e o seu sucessor. 
#include <stdio.h>

int main() {
    int numero;

    printf ("Digite o numero desejado para ser mostrado seu antecessor e sucessor: \n");
    scanf ("%d", &numero);

    printf("Antecessor: %d | Sucessor: %d\n", numero - 1, numero + 1);

return 0;
}