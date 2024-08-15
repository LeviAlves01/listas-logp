#include<stdio.h>

int main()
{
    int valor1, valor2, valor3;
    printf("Digite o valor 1:");
    scanf("%i", &valor1);
    printf("Digite o valor 2:");
    scanf("%i", &valor2);
    printf("Digite o valor 3:");
    scanf("%i", &valor3);

if((valor1%3==0) || (valor2%3==0) || (valor3%3==0)){
    printf("Esses valores são divisíveis por 3: %i, %i, %i\n", valor1, valor2, valor3);
}
else{
    printf("Esses valores não são divisíveis por 3");
}

if((valor1%2==0) || (valor2%2==0) || (valor3%2==0)){
    printf("\nEsses valores são divisíveis por 2:%i, %i, %i\n", valor1, valor2, valor3);
}
else{
    printf("\nEsses valores não são divisíveis por 2");
}

return 0;
}