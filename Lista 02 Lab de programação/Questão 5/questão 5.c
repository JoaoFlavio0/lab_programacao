#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int main(){
    struct dma dma1, dma2;

    printf("--- Calculadora de Diferenca de Datas ---\n");

    printf("Digite a data inicial (DD MM AAAA): ");
    scanf("%d %d %d", &dma1.dia, &dma1.mes, &dma1.ano);

    if (dma1.dia > 31 || dma1.mes > 12 || dma1.dia < 1 || dma1.mes < 1){
        printf ("A data não está correta.");
        return 1;
    }

    printf("Digite a data final (DD MM AAAA): ");
    scanf("%d %d %d", &dma2.dia, &dma2.mes, &dma2.ano);

        if (dma2.dia > 31 || dma2.mes > 12 || dma2.dia < 1 || dma2.mes < 1){
        printf ("A data não está correta.");
        return 1;
    }

    int dias1, dias2, diferenca;

    dias1 = dma1.ano * 365 + dma1.mes * 30 + dma1.dia;
    dias2 = dma2.ano * 365 + dma2.mes * 30 + dma2.dia;

    diferenca = dias2 - dias1;
    if (diferenca < 0) {
    diferenca = diferenca * -1;
}

    printf("Diferenca em dias: %d\n", diferenca);

    return 0;
}