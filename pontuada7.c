#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int opcao;

    printf("Menu:\n");
    printf("1 - novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configuracoes\n");
    printf("escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
       
        case 1:
            printf("iniciando um novo jogo...\n");
          
            break;
       
        case 2:
            printf("carregando jogo...\n");
          
            break;
       
        case 3:
            printf("acessando as configuracoes...\n");
            
            break;
       
        default:
            printf("opcao invalida!\n");
            break;
    }

    return 0;
}
