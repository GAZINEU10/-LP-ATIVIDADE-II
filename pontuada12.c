#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int quantidadeDeNotas, i;
    float nota;
    float soma=0;
    float media;

    printf("digite a quantidade de notas: ");
    scanf("%d", &quantidadeDeNotas);

    if (quantidadeDeNotas <= 0) {
        printf("quantidade de notas inválidas.\n");
        return 1;
    }

    for (i = 1; i <= quantidadeDeNotas; i++) {
        printf("digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidadeDeNotas;
    printf("a média das notas é: %.2f\n", media);

    return 0;
}
