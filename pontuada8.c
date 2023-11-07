#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("zero!\n");
                break;
           
            case 1:
                printf("um!\n");
                break;
           
            default:
                printf("%d...\n", numero);
                break;
        }
        numero--;
    }

    return 0;
}
