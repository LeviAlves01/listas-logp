#include<stdio.h>

int main()
{
    int A, B, C;

    printf("Digite o valor A:");
    scanf("%i", &A);
    printf("Digite o valor B:");
    scanf("%i", &B);
    printf("Digite o valor C:");
    scanf("%i", &C);

    if ((A >= B) && (B >= C)) {
        printf("A ordem crescente é: %i, %i, %i\n", C, B, A);
    } else if ((A >= C) && (C >= B)) {
        printf("A ordem crescente é: %i, %i, %i\n", B, C, A);
    } else if ((B >= A) && (A >= C)) {
        printf("A ordem crescente é: %i, %i, %i\n", C, A, B);
    } else if ((B >= C) && (C >= A)) {
        printf("A ordem crescente é: %i, %i, %i\n", A, C, B);
    } else if ((C >= A) && (A >= B)) {
        printf("A ordem crescente é: %i, %i, %i\n", B, A, C);
    } else {
        printf("A ordem crescente é: %i, %i, %i\n", A, B, C);
    }
    
    return 0;
}
