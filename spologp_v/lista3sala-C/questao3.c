#include<stdio.h>

int main(){
    int numero = 0;
    
    printf("Digite um número qualquer:");
    scanf("%i", &numero);
    
    int produto = 1;

    while(produto <= 10){
        printf("%i x %i = %i\n", numero, produto, numero * produto);
        produto++;
    }
    return 0;
}