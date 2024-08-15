#include<stdio.h>
#include<stdbool.h>

int main()
{
    int A, B, C;
    bool triangulo;

    printf("Digite o valor do lado A:");
    scanf("%i", &A);
    printf("Digite o valor do lado B:");
    scanf("%i", &B);
    printf("Digite o valor do lado C:");
    scanf("%i", &C);

if((A+B>C) && (A+C>B) && (B+C>A))
    triangulo = true;

else{
    triangulo = false;
}

if(triangulo == true){
    if((A==B) && (A==C)){
    printf("Esse é um triângulo equilátero");
    }
    else if((A==B) || (A==C) || (B==C)){
        printf("Esse é um triângulo isósceles");
    }

    else{
        printf("Esse é um triângulo escaleno");
    }
}

if (triangulo == false){
    printf("Esses valores não correspondem a um triângulo");
}

return 0;
}