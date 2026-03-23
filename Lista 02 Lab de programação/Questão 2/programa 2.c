#include <stdio.h>

int main(void) {
    int a = 70000;
    short int b;
    b = a;
    printf("%d -> %hd\n", a, b);
    return 0;
}

/*
Explicação:

A variável "a" é do tipo int e recebe o valor 70000.
Já a variável "b" é do tipo short int, que ocupa 16 bits
e armazena apenas valores no intervalo de -32.768 a 32.767.

Ao fazer a atribuição "b = a", ocorre uma conversão de tipo.
Por conta do valor de "a", ser grande demais para o short int
ele reajusta esse valor, fazendo um overflow.

Esse ajuste é feito por meio de uma operação módulo 65536 (2^16),
resultando em:

70000 - 65536 = 4464
*/