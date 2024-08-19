#include <stdio.h>

int main() {
    int numeros[5]; 
    int i;
    int maior, menor;

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    maior = menor = numeros[0];
    
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior valor é: %i\n", maior);
    printf("O menor valor é: %i\n", menor);

    return 0;
}