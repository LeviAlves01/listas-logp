#include<stdio.h>

int main(){
    int numero;
    printf("Digite um número menor que 50: ");
    scanf("%i", &numero);

    if(numero>50){
        printf("Não é possível realizar o cálculo com esse valor");
    }

    else{
        while(numero<=250){
            printf("%i\n", numero);
            numero = numero*3;
        }
    }
    return 0;
}