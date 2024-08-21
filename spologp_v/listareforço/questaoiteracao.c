#include<stdio.h>

int main(){
    int i = 1;
    int numero;

    printf("Digite o valor: ");
    scanf("%i", &numero);

    while(i<=numero){
        if(i%2==0){
            printf("Esse número é par: %i", i);
        }

        else{
            printf("Esse número é ímpar: %i", i);
        }

        i++;
    }

    return 0;
}