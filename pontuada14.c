#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;
    int totalDeNumeros; 
    int  contadorDePares = 0;
    int contadorDeImpares = 0;
    float somaDePares = 0;
    float somaDeImpares = 0;
    int i;


    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &totalDeNumeros);

    for ( i = 0; i < totalDeNumeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorDePares++;
            somaDePares += numero;
        } else {
            contadorDeImpares++;
            somaDeImpares += numero;
        }
    }

    if (contadorDePares > 0) {
        printf("Quantidade de numeros pares: %d\n", contadorDePares);
        printf("Media aritmetica dos numeros pares: %.2f\n", somaDePares / contadorDePares);
    } else {
        printf("Nenhum numero par foi inserido.\n");
    }

    if (contadorDeImpares > 0) {
        printf("Quantidade de numeros impares: %d\n", contadorDeImpares);
        printf("Media aritmetica dos numeros impares: %.2f\n", somaDeImpares / contadorDeImpares);
    } else {
        printf("Nenhum numero impar foi inserido.\n");
    }

    return 0;
}
