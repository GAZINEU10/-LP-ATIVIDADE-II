#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero1;
    int numero2;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("os numeros sao iguais.\n");
    } else if (numero1 > numero2) {
        printf("o primeiro numero (%d) é maior que o segundo numero (%d).\n", numero1, numero2);
    } else {
        printf("o segundo numero (%d) é maior que o primeiro numero (%d).\n", numero2, numero1);
    }

    return 0;
}
