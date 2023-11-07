#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");
   
    float valorDoProduto;
    float desconto;
    char diaDaSemana;

    printf("Digite o valor do Produto: R$ ");
    scanf("%f", &valorDoProduto);

    printf("Digite o dia da semana (S para dia da semana, F para fim de semana): ");
    scanf(" %c", &diaDaSemana);

    if (valorDoProduto > 100) {
        if (diaDaSemana == 'S' || diaDaSemana == 's') {
            desconto = valorDoProduto * 0.1;
            printf("Desconto aplicado: R$ %.2f\n", desconto);
        } else if (diaDaSemana == 'F' || diaDaSemana == 'f') {
            desconto = valorDoProduto* 0.15;
            printf("Desconto aplicado: R$ %.2f\n", desconto);
        } else {
            printf("Dia da semana inválido!\n");
        }
    } else {
        printf("Valor do Produto nao atende ao valor minimo para desconto.\n");
    }

    return 0;
}
