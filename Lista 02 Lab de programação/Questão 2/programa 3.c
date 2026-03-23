#include <stdio.h>

int main(void) {
    int a = -896;
    signed char b;
    b = a;
    printf("%d -> %hhd\n", a, b);
    return 0;
}

/*
Explicação:

A variável "a" é do tipo int e recebe o valor -896.
Já a variável "b" é do tipo signed char, que ocupa 8 bits
e armazena apenas valores no intervalo de -128 a 127.

Ao fazer a atribuição "b = a", ocorre uma conversão de tipo.
Por conta do valor de "a", ser grande demais para o signed char
ele reajusta esse valor, para fazer caber na atribuição, resultando
apenas no "-128"

*/