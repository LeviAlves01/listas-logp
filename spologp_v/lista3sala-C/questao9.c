#include<stdio.h>
#include<math.h>

int main(){
    int base;
    int expoente;
    int potencia;

    printf("Digite o valor da base:");
    scanf("%i", &base);
    printf("Digite o valor do expoente:");
    scanf("%i", &expoente);

    potencia = pow(base, expoente);

    printf("%i elevado a %i = %i", base, expoente, potencia);
    
    return 0;
}