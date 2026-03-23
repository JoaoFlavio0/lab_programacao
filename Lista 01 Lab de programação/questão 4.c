//4) Crie um programa que leia três notas de um aluno (pesos 2, 3 e 5, respectivamente). Calcule e exiba a média ponderada final.
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, notafinal;

    printf ("Digite as 3 notas, respectivamente, para calcular a média ponderada: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    notafinal = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10; 

    printf ("A nota final do aluno é: \n%.1f", notafinal);
    

    return 0;
}