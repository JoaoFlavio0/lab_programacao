//2) Crie um programa que solicite ao usuário dois números inteiros, calcule a soma entre eles e exiba o resultado
#include <stdio.h>

int numero1, numero2, soma;

int main()  {
    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);
    
    soma = numero1 + numero2;

    printf ("A soma da: \n%d", soma);


    return 0;
}



