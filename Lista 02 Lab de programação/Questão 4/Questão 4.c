#include <stdio.h>
#include <string.h>

struct livro {
    int ano_publicado;
    char titulo[50];
    char autor[50];
};

int main(void) {
    int anos_diferenca;
    struct livro l1, l2;

    printf("Digite o titulo do livro 1: ");
    fgets(l1.titulo, 50, stdin);
    l1.titulo[strcspn(l1.titulo, "\n")] = '\0';

    printf("Digite o nome do autor do livro 1: ");
    fgets(l1.autor, 50, stdin);
    l1.autor[strcspn(l1.autor, "\n")] = '\0';

    printf("Digite o ano do livro 1: ");
    scanf("%d", &l1.ano_publicado);
    while (getchar() != '\n');



    printf("Digite o titulo do livro 2: ");
    fgets(l2.titulo, 50, stdin);
    l2.titulo[strcspn(l2.titulo, "\n")] = '\0';

    printf("Digite o nome do autor do livro 2: ");
    fgets(l2.autor, 50, stdin);
    l2.autor[strcspn(l2.autor, "\n")] = '\0';

    printf("Digite o ano do livro 2: ");
    scanf("%d", &l2.ano_publicado);



    anos_diferenca = l1.ano_publicado - l2.ano_publicado;
    if (anos_diferenca < 0) anos_diferenca *= -1;



    if (l1.ano_publicado < l2.ano_publicado) {
        printf("O livro mais antigo e %s, de %s, publicado em %d\n",
               l1.titulo, l1.autor, l1.ano_publicado);
    } 
    
    else {
        printf("O livro mais antigo e %s, de %s, publicado em %d\n",
               l2.titulo, l2.autor, l2.ano_publicado);
    }

    printf("Diferenca de %d anos\n", anos_diferenca);

    return 0;
}