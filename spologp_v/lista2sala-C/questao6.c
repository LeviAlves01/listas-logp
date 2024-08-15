#include<stdio.h>
#include<math.h>

int main()
{
    float valorA, valorB, valorC, delta, x1, x2, x, raiz, raiz2;

    printf("Digite o valor A:");
    scanf("%f", &valorA);
    printf("Digite o valor B:");
    scanf("%f", &valorB);
    printf("Digite o valor C:");
    scanf("%f", &valorC);

    delta = pow(-valorB, 2)-4*valorA*valorC;

if(delta>0){
    raiz = (int)sqrt(delta);
    x1 = (-1)*-valorB+raiz/(2*valorA);
    x2 = (-1)*-valorB-raiz/(2*valorA);
    printf("Esse valor possui duas raízes reais e distintas: %.1f, %.1f", x1, x2);
}

else if(delta==0){
    raiz2 = (int)sqrt(delta);
    x = -valorB+raiz2/(2*valorA);
    printf("Esse número possui apenas uma raiz real: %.1f", x);
}

else{
    printf("Esse número não possui raízes reais.");
}

return 0;
}