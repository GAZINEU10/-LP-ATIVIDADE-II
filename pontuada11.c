#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int codigoDeAcesso = 1234;
    int tentativa;

    do {
        printf("Digite o codigo de acesso: ");
        scanf("%d", &tentativa);

        if (tentativa == codigoDeAcesso) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Código de acesso incorreto. Tente outra vez.\n");
        }
    } while (1);

    return 0;
}
