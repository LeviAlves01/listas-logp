#include<stdio.h>

int main(){
    int numero;
    printf("Digite o número que você deseja saber a tabuada:");
    scanf("%i", &numero);
    
    int fator = 0;
    int produto;

    while(fator<=10){
        produto = numero*fator;
        printf("%i x %i = %i\n", numero, fator, produto);
        fator++;
    }
}