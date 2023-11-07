#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int escolhaUmIdioma;

    printf("Escolha um idioma de sua preferencia:\n");
    printf("1 - ingles\n");
    printf("2 - espanhol\n");
    printf("3 - frances\n");
    scanf("%d", &escolhaUmIdioma);

    switch (escolhaUmIdioma) {
       
        case 1:
            printf("welcome!\n");
            break;
        
        case 2:
            printf("¡bienvenido!\n");
            break;
       
        case 3:
            printf("bienvenue!\n");
            break;
       
        default:
            printf("opção invalida!\n");
            break;
    }

    return 0;
}
