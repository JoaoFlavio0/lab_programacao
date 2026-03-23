#include <stdio.h>

int main() {

    char nome[50];
    float salario_fixo, vendas, comissao, salario_total, salario_com_imposto;

    printf("Digite o seu nome:\n");
    fgets(nome, 50, stdin);

    printf("Digite o seu salario fixo:\n");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas efetuadas (em dinheiro):\n");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salario_total = salario_fixo + comissao;

    salario_com_imposto = salario_total * 0.92;

    printf("O salario de %ssera R$%.2f.\n", nome, salario_total);
    printf("Com desconto de 8%% de imposto: R$%.2f\n", salario_com_imposto);

    return 0;
}