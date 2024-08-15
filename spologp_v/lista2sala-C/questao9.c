#include<stdio.h>

int main()
{
    int v1, v2;
    printf("Digite o valor 1:");
    scanf("%i", &v1);
    printf("Digite o valor 2:");
    scanf("%i", &v2);

if((v1%4==0) || (v2%4==0)){
    printf("Esses valores são divisíveis por 4: %i, %i, %i\n", v1, v2);
}
else{
    printf("\nEsses valores não são divisíveis por 4\n");
}

if((v1%5==0) || (v2%5==0)){
    printf("\nEsses valores são divisíveis por 5: %i, %i, %i\n", v1, v2);
}
else{
    printf("\nEsses valores não são divisíveis por 5\n");
}

return 0;
}