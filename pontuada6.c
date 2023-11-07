#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int codigoDoProduto;

    printf("Escolha o código do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calca\n");
    printf("3 - Sapato\n");
    scanf("%d", &codigoDoProduto);

    switch (codigoDoProduto) {
        
        case 1:
            printf("Produto selecionado: Camiseta\n");
            printf("Preco: R$ 50,00\n");
            break;
        
        case 2:
            printf("Produto selecionado: Calça\n");
            printf("Preco: R$ 80,00\n");
            break;
        
        case 3:
            printf("Produto selecionado: Sapato\n");
            printf("Preco: R$ 120,00\n");
            break;
        
        default:
            printf("Código de produto invalido!\n");
            break;
    }

    return 0;
}
