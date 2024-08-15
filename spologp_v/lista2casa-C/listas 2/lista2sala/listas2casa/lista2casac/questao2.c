#include<stdio.h>

int main()
{
    int valor, valor_chave, distancia;
    printf("Digite um valor:");
    scanf("%i", &valor);
    valor_chave = 100;

    distancia = valor-valor_chave;

if(valor<0){
    distancia = valor*-1-valor_chave;
    printf("A distância desse número para o valor chave é:", valor_chave);
}

else{
    printf("A distância desse número para o valor chave é:", valor_chave);
}

return 0;
} 