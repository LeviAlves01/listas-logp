#include<stdio.h>

int main()
{
    int valor, conversao;

    printf("Digite o valor:");
    scanf("%i", &valor);

if(valor<0){
    conversao = valor*-1;
    printf("O valor é: %i", conversao);
}

else{
    printf("Esse valor não é negativo");
}

return 0;
}