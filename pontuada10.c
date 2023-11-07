#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("digite a operaçao desejada (+ ou -): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da adicao e: %.2f\n", resultado);
            break;
        
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da subtracao e: %.2f\n", resultado);
            break;
       
        default:
            printf("Operaçao invalida!\n");
            break;
    }

    return 0;
}
