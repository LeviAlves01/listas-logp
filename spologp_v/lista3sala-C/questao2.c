#include<stdio.h>

int main(){
    int i = 1;
    int soma = 0;

    while(i<=100){
        soma = soma+i;
        printf("%i\n", soma);
        i++;
    }
    printf("A soma dos números de 1 até 100 é: %i", soma);
    return 0;
}