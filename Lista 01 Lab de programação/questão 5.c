//5) Escreva um programa que receba um valor em Reais (BRL) e a cotação atual do Dólar (USD). Exiba quanto o valor em Reais representa em Dólares 
#include <stdio.h>

int main() {
    float reais, dolar;

    printf("CONVERSOR DE REAIS PARA DOLARES \n Digite o seu valor em reais: ");
    scanf ("%f", &reais);
    dolar = reais * 5.21;
    printf ("O resultado em dolares e: \n$%.2f", dolar);


return 0;
}