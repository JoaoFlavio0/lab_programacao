#include <stdio.h>

int main(void) {
    int a = -73538;
    unsigned short int b;
    b = a;
    printf("%d -> %hu\n", a, b);
    return 0;
}

/*
Explicação:

A variável "a" é do tipo int e recebe o valor -73538.
Já a variável "b" é do tipo unsigned short int, que ocupa 16 bits
e armazena apenas valores no intervalo de 0 a 65535.

Ao fazer a atribuição "b = a", ocorre uma conversão de tipo.
Como "b" não suporta valores negativos, o valor de "a" é ajustado
para caber no intervalo de um unsigned short.

Esse ajuste é feito por meio de uma operação módulo 65536 (2^16),
resultando em:

-73538 + 65536 = -8002
-8002 + 65536 = 57534

Portanto, o valor armazenado em "b" será 57534.

Esse comportamento é conhecido como overflow em tipos sem sinal
(wrap-around), onde o valor "dá a volta" no limite do tipo.
*/