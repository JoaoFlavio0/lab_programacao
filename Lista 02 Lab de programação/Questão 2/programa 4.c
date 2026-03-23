#include <stdio.h>

int main(void) {
    double a = 32600.234, b = 40000;
    short int c = a;
    short int d = b;
    printf("%hd %hd\n", c, d);
    return 0;
}

/*
Explicação:

As variáveis "a" e "b" são do tipo double.
Ao atribuí-las para variáveis do tipo short int, ocorre conversão
de ponto flutuante para inteiro, descartando a parte decimal.

No caso de "c", o valor 32600 está dentro do intervalo de um short int
(-32768 a 32767), então a conversão ocorre normalmente.

No caso de "d", o valor 40000 excede esse intervalo.
Essa conversão resulta em overflow e, segundo o padrão da linguagem C,
o comportamento é indefinido.

Dependendo do compilador e da implementação, o valor pode variar.
Neste caso, o resultado obtido foi -32768.
*/