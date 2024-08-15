#include<stdio.h>

int main()
{
    int A, B, diferenca;
    printf("Digite o valor de A:");
    scanf("%i", &A);
    printf("Digite o valor de B:");
    scanf("%i", &B);

    diferenca = A-B;

if(A>B){
    printf("A diferença do maior valor para o menor é: %i", diferenca);
}

else{
    diferenca = B-A;
    printf("A diferença do maior valor para o menor é: %i", diferenca);
}

return 0;
}