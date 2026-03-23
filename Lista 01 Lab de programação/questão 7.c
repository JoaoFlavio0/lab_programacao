//7) Escreva um programa que leia um valor inteiro em segundos e o converta para o formato Horas:Minutos:Segundos. 
#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;
    printf ("Digite os segundos que serão convertidos em horas, minutos e segundos, respectivamente: \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;


    printf ("A conversao se deu por: %d Horas %d Minutos e %d Segundos.\n", horas, minutos, segundos);

return 0;
}