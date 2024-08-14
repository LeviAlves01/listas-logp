#include<stdio.h>

int main()
{
    int valor;
    printf("Digite um valor:\n");
    scanf("%i", &valor);

if(valor%2==0){
    printf("Esse valor é par");
}

if(valor%3==0){
    printf("Esse valor é ímpar");
}
}