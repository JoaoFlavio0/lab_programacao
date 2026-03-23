#include <stdio.h>

struct pessoa {
    long long int telefone;
    char nome [50];
    int idade;
};

int main(void) {
    struct pessoa p1;

    printf("Digite o nome da pessoa:\n");
    fgets(p1.nome, 50, stdin);
    printf("Digite a idade da pessoa:\n");
    scanf("%d", &p1.idade);
    printf("Digite o telefone da pessoa:\n");
    scanf("%lld", &p1.telefone);

    printf("O nome da pessoa e:%s", p1.nome);
    printf("A idade da pessoa e:%d\n", p1.idade);
    printf("O telefone da pessoa e:%lld\n", p1.telefone);


    return 0;
}