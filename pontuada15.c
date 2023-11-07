#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int opcao;
    float valor; 
    float resultado;
   
    while (1) {
        printf("\nEscolha uma opção de conversao:\n");
        printf("1. converter quilômetros para milhas\n");
        printf("2. converter elsius para Fahrenheit\n");
        printf("0. sair do programa\n");
        printf("opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("saindo do programa...\n");
                return 0;
            case 1:
                printf("digite a distância em quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilômetros é igual a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("digite a temperatura em graus celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus celsius é igual a %.2f graus fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção incorreta! Escolha uma opção correta.\n");
                break;
        }
    }
}
