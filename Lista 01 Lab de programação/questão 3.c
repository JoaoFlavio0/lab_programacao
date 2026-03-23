//3) Desenvolva um programa que leia um número real (float), calcule o seu dobro e exiba o resultado com três casas decimais.
#include <stdio.h>

int main() {
    float numero, resultado;
    printf ("Digite o numero para ser calculado o seu dobro: \n");
    scanf ("%f", &numero);

    resultado = numero * 2;

    printf ("O resultado é: \n%.3f", resultado );

    return 0;
}