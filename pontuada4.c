#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int idade;

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("acesso permitido\n");
    } else {
        printf("acesso negado\n");
    }

    return 0;
}
