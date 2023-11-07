#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Excelente\n");

    } else if (nota >= 7 && nota < 9) {
        printf("Bom\n");

    } else if (nota >= 5 && nota < 7) {
        printf("Razoável\n");
        
    } else {
        printf("Insuficiente\n");
    }

    return 0;
}
