#include<stdio.h>

int main()
{
    int v1, v2, v3;
    printf("Digite o primeiro valor:");
    scanf("%i", &v1);
    printf("Digite o segundo valor:");
    scanf("%i", &v2);
    printf("Digite o terceiro valor:");
    scanf("%i", &v3);

if((v3>v2) && (v2>v1)){
    printf("A ordem crescente é: %i, %i, %i", v1, v2, v3);
}

else if((v3>v1) && (v1>v2)){
    printf("A ordem crescente é: %i, %i, %i", v1, v3, v2);
}

else if((v2>v3) && (v3>v1)){
    printf("A ordem crescente é: %i, %i, %i", v2, v3, v1);
}

else if((v2>v1) && (v1>v3)){
    printf("A ordem crescente é: %i, %i, %i", v3, v1, v2);
}

else if((v1>v2) && (v2>v3)){
    printf("A ordem crescente é: %i, %i, %i", v3, v2, v1);
}

else if((v1>v3) && (v3>v2)){
    printf("A ordem crescente é: %i, %i, %i", v3, v1, v2);
}

return 0;
}