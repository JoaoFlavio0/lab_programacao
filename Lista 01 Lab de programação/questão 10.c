/*
10) Faça um programa que solicita um número decimal e imprime o 
correspondente em hexa e octal. em c da maneira mais simples possível
*/

#include <stdio.h>

int main()
{
    int decimal;
    printf("Digite o número em decimal para ser convertido para hexa e octal: \n");
    scanf("%d", &decimal);
    printf("Hexadecimal: %x | Octal: %o ", decimal, decimal);
    
    return 0;
}
